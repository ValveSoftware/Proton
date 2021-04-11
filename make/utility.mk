empty =
space = $(empty) $(empty)
comma = ,
quote = '
double-quote = "

define newline


endef

escape = $(subst $(space),\$(space),$(subst $(double-quote),\$(double-quote),$(1)))

list-join = $(if $(2),$(3)$(subst $(space),$(1),$(strip $(2)))$(4))
list-quote = $(call list-join,$(quote)$(comma)$(quote),$(1),$(2)$(quote),$(quote)$(3))
list-double-quote = $(call list-join,$(double-quote)$(space)$(double-quote),$(1),$(2)$(double-quote),$(double-quote)$(3))

head = $(word 1,$(1))
tail = $(wordlist 2,$(words $(1)),$(1))

translate = $(if $(1),$(call translate,$(call tail,$(1)),$(call tail,$(2)),$$(subst $(call head,$(1)),$(call head,$(2)),$(3))),$(3))
reverse = $(if $(1),$(call reverse,$(call tail,$(1)) $(call head,$(1))))

[lower] := a b c d e f g h i j k l m n o p q r s t u v w x y z - .
[upper] := A B C D E F G H I J K L M N O P Q R S T U V W X Y Z _ _

$(eval toupper = $(call translate,$([lower]),$([upper]),$$(1)))
$(eval tolower = $(call translate,$([upper]),$([lower]),$$(1)))
