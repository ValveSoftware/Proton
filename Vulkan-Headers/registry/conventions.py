#!/usr/bin/python3 -i
#
# Copyright (c) 2013-2019 The Khronos Group Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Base class for working-group-specific style conventions,
# used in generation.

from enum import Enum

# Type categories that respond "False" to isStructAlwaysValid
# basetype is home to typedefs like ..Bool32
CATEGORIES_REQUIRING_VALIDATION = set(('handle',
                                       'enum',
                                       'bitmask',
                                       'basetype',
                                       None))

# These are basic C types pulled in via openxr_platform_defines.h
TYPES_KNOWN_ALWAYS_VALID = set(('char',
                                'float',
                                'int8_t', 'uint8_t',
                                'int32_t', 'uint32_t',
                                'int64_t', 'uint64_t',
                                'size_t',
                                'uintptr_t',
                                'int',
                                ))


class ProseListFormats(Enum):
    """A connective, possibly with a quantifier."""
    AND = 0
    EACH_AND = 1
    OR = 2
    ANY_OR = 3

    @classmethod
    def from_string(cls, s):
        if s == 'or':
            return cls.OR
        if s == 'and':
            return cls.AND
        return None

    @property
    def connective(self):
        if self in (ProseListFormats.OR, ProseListFormats.ANY_OR):
            return 'or'
        return 'and'

    def quantifier(self, n):
        """Return the desired quantifier for a list of a given length."""
        if self == ProseListFormats.ANY_OR:
            if n > 1:
                return 'any of '
        elif self == ProseListFormats.EACH_AND:
            if n > 2:
                return 'each of '
            if n == 2:
                return 'both of '
        return ''


class ConventionsBase:
    """WG-specific conventions."""

    def __init__(self):
        self._command_prefix = None
        self._type_prefix = None

    def formatExtension(self, name):
        """Mark up a name as an extension for the spec.

        Must implement."""
        raise NotImplementedError

    @property
    def null(self):
        """Preferred spelling of NULL."""
        raise NotImplementedError

    def makeProseList(self, elements, fmt=ProseListFormats.AND, with_verb=False, *args, **kwargs):
        """Make a (comma-separated) list for use in prose.

        Adds a connective (by default, 'and')
        before the last element if there are more than 1.

        Adds the right one of "is" or "are" to the end if with_verb is true.

        Optionally adds a quantifier (like 'any') before a list of 2 or more,
        if specified by fmt.

        Override with a different method or different call to
        _implMakeProseList if you want to add a comma for two elements,
        or not use a serial comma.
        """
        return self._implMakeProseList(elements, fmt, with_verb, *args, **kwargs)

    @property
    def struct_macro(self):
        """Get the appropriate format macro for a structure.

        May override.
        """
        return 'sname:'

    @property
    def external_macro(self):
        """Get the appropriate format macro for an external type like uint32_t.

        May override.
        """
        return 'code:'

    def makeStructName(self, name):
        """Prepend the appropriate format macro for a structure to a structure type name.

        Uses struct_macro, so just override that if you want to change behavior.
        """
        return self.struct_macro + name

    def makeExternalTypeName(self, name):
        """Prepend the appropriate format macro for an external type like uint32_t to a type name.

        Uses external_macro, so just override that if you want to change behavior.
        """
        return self.external_macro + name

    def _implMakeProseList(self, elements, fmt, with_verb, comma_for_two_elts=False, serial_comma=True):
        """Internal-use implementation to make a (comma-separated) list for use in prose.

        Adds a connective (by default, 'and')
        before the last element if there are more than 1,
        and only includes commas if there are more than 2
        (if comma_for_two_elts is False).

        Adds the right one of "is" or "are" to the end if with_verb is true.

        Optionally adds a quantifier (like 'any') before a list of 2 or more,
        if specified by fmt.

        Don't edit these defaults, override self.makeProseList().
        """
        assert(serial_comma)  # didn't implement what we didn't need
        if isinstance(fmt, str):
            fmt = ProseListFormats.from_string(fmt)

        my_elts = list(elements)
        if len(my_elts) > 1:
            my_elts[-1] = '{} {}'.format(fmt.connective, my_elts[-1])

        if not comma_for_two_elts and len(my_elts) <= 2:
            prose = ' '.join(my_elts)
        else:
            prose = ', '.join(my_elts)

        quantifier = fmt.quantifier(len(my_elts))

        parts = [quantifier, prose]

        if with_verb:
            if len(my_elts) > 1:
                parts.append(' are')
            else:
                parts.append(' is')
        return ''.join(parts)

    @property
    def file_suffix(self):
        """Return suffix of generated Asciidoctor files"""
        raise NotImplementedError

    def api_name(self, spectype=None):
        """Return API or specification name for citations in ref pages.

        spectype is the spec this refpage is for.
        'api' (the default value) is the main API Specification.
        If an unrecognized spectype is given, returns None.

        Must implement."""
        raise NotImplementedError

    def should_insert_may_alias_macro(self, genOpts):
        """Return true if we should insert a "may alias" macro in this file.

        Only used by OpenXR right now."""
        return False

    @property
    def command_prefix(self):
        """Return the expected prefix of commands/functions.

        Implemented in terms of api_prefix."""
        if not self._command_prefix:
            self._command_prefix = self.api_prefix[:].replace('_', '').lower()
        return self._command_prefix

    @property
    def type_prefix(self):
        """Return the expected prefix of type names.

        Implemented in terms of command_prefix (and in turn, api_prefix)."""
        if not self._type_prefix:
            self._type_prefix = ''.join(
                (self.command_prefix[0:1].upper(), self.command_prefix[1:]))
        return self._type_prefix

    @property
    def api_prefix(self):
        """Return API token prefix.

        Typically two uppercase letters followed by an underscore.

        Must implement."""
        raise NotImplementedError

    @property
    def api_version_prefix(self):
        """Return API core version token prefix.

        Implemented in terms of api_prefix.

        May override."""
        return self.api_prefix + 'VERSION_'

    @property
    def KHR_prefix(self):
        """Return extension name prefix for KHR extensions.

        Implemented in terms of api_prefix.

        May override."""
        return self.api_prefix + 'KHR_'

    @property
    def EXT_prefix(self):
        """Return extension name prefix for EXT extensions.

        Implemented in terms of api_prefix.

        May override."""
        return self.api_prefix + 'EXT_'

    def writeFeature(self, featureExtraProtect, filename):
        """Return True if OutputGenerator.endFeature should write this feature.

        Defaults to always True.
        Used in COutputGenerator.

        May override."""
        return True

    def requires_error_validation(self, return_type):
        """Return True if the return_type element is an API result code
        requiring error validation.

        Defaults to always False.

        May override."""
        return False

    @property
    def required_errors(self):
        """Return a list of required error codes for validation.

        Defaults to an empty list.

        May override."""
        return []

    def is_voidpointer_alias(self, tag, text, tail):
        """Return True if the declaration components (tag,text,tail) of an
        element represents a void * type.

        Defaults to a reasonable implementation.

        May override."""
        return tag == 'type' and text == 'void' and tail.startswith('*')

    def make_voidpointer_alias(self, tail):
        """Reformat a void * declaration to include the API alias macro.

        Defaults to a no-op.

        Must override if you actually want to use this feature in your project."""
        return tail

    def category_requires_validation(self, category):
        """Return True if the given type 'category' always requires validation.

        Defaults to a reasonable implementation.

        May override."""
        return category in CATEGORIES_REQUIRING_VALIDATION

    def type_always_valid(self, typename):
        """Return True if the given type name is always valid (never requires validation).

        This is for things like integers.

        Defaults to a reasonable implementation.

        May override."""
        return typename in TYPES_KNOWN_ALWAYS_VALID
