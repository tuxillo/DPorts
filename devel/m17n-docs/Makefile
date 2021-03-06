# New ports collection makefile for:   m17n-docs
# Date created:                29 May 2004
# Whom:                        Kimura Fuyuki <fuyuki@hadaly.org>
#
# $FreeBSD: ports/devel/m17n-docs/Makefile,v 1.11 2012/11/17 05:55:59 svnexp Exp $
#

PORTNAME=	m17n-docs
PORTVERSION=	1.5.5
CATEGORIES=	devel
MASTER_SITES=	http://www.m17n.org/m17n-lib-download/ \
		http://anthesphoria.net/FreeBSD/ports/distfiles/

MAINTAINER=	nikola.lecic@anthesphoria.net
COMMENT=	The m17n library documentation

NO_BUILD=	yes

OPTIONS=	JAPANESE "Install Japanese documentation (HTML and PDF)" off

.include <bsd.port.options.mk>

.if defined(WITH_JAPANESE)
PLIST_SUB+=	JAPANESE=""
.else
PLIST_SUB+=	JAPANESE="@comment "
.endif

MAN1=		m17n-config.1 m17n-db.1
MAN3=		m17nCharacter.3m17n \
		m17nCharset.3m17n \
		m17nChartable.3m17n \
		m17nConv.3m17n \
		m17nCore.3m17n \
		m17nDatabase.3m17n \
		m17nDebug.3m17n \
		m17nDraw.3m17n \
		m17nError.3m17n \
		m17nFLT.3m17n \
		m17nFace.3m17n \
		m17nFont.3m17n \
		m17nFontset.3m17n \
		m17nFrame.3m17n \
		m17nGUI.3m17n \
		m17nInputMethod.3m17n \
		m17nInputMethodWin.3m17n \
		m17nIntro.3m17n \
		m17nLocale.3m17n \
		m17nMisc.3m17n \
		m17nMtext.3m17n \
		m17nObject.3m17n \
		m17nPlist.3m17n \
		m17nShell.3m17n \
		m17nSymbol.3m17n \
		m17nTextProperty.3m17n \
		m17n_object.3m17n \
		m17n_object_ref.3m17n \
		m17n_object_unref.3m17n \
		m17n_status.3m17n \
		mchar_decode.3m17n \
		mchar_define_charset.3m17n \
		mchar_define_property.3m17n \
		mchar_encode.3m17n \
		mchar_get_prop.3m17n \
		mchar_get_prop_table.3m17n \
		mchar_list_charset.3m17n \
		mchar_map_charset.3m17n \
		mchar_put_prop.3m17n \
		mchar_resolve_charset.3m17n \
		mchartable.3m17n \
		mchartable_lookup.3m17n \
		mchartable_map.3m17n \
		mchartable_max_char.3m17n \
		mchartable_min_char.3m17n \
		mchartable_range.3m17n \
		mchartable_set.3m17n \
		mchartable_set_range.3m17n \
		mconv_buffer_converter.3m17n \
		mconv_decode.3m17n \
		mconv_decode_buffer.3m17n \
		mconv_decode_stream.3m17n \
		mconv_define_coding.3m17n \
		mconv_encode.3m17n \
		mconv_encode_buffer.3m17n \
		mconv_encode_range.3m17n \
		mconv_encode_stream.3m17n \
		mconv_free_converter.3m17n \
		mconv_getc.3m17n \
		mconv_gets.3m17n \
		mconv_list_codings.3m17n \
		mconv_putc.3m17n \
		mconv_rebind_buffer.3m17n \
		mconv_rebind_stream.3m17n \
		mconv_reset_converter.3m17n \
		mconv_resolve_coding.3m17n \
		mconv_stream_converter.3m17n \
		mconv_ungetc.3m17n \
		mdatabase_define.3m17n \
		mdatabase_find.3m17n \
		mdatabase_list.3m17n \
		mdatabase_load.3m17n \
		mdatabase_tag.3m17n \
		mdebug_dump_all_symbols.3m17n \
		mdebug_dump_chartab.3m17n \
		mdebug_dump_face.3m17n \
		mdebug_dump_flt.3m17n \
		mdebug_dump_font.3m17n \
		mdebug_dump_fontset.3m17n \
		mdebug_dump_im.3m17n \
		mdebug_dump_mtext.3m17n \
		mdebug_dump_plist.3m17n \
		mdebug_dump_symbol.3m17n \
		mdebug_hook.3m17n \
		mdraw_clear_cache.3m17n \
		mdraw_coordinates_position.3m17n \
		mdraw_default_line_break.3m17n \
		mdraw_glyph_info.3m17n \
		mdraw_glyph_list.3m17n \
		mdraw_image_text.3m17n \
		mdraw_per_char_extents.3m17n \
		mdraw_text.3m17n \
		mdraw_text_extents.3m17n \
		mdraw_text_items.3m17n \
		mdraw_text_per_char_extents.3m17n \
		mdraw_text_with_control.3m17n \
		mface.3m17n \
		mface_copy.3m17n \
		mface_equal.3m17n \
		mface_from_font.3m17n \
		mface_get_hook.3m17n \
		mface_get_prop.3m17n \
		mface_merge.3m17n \
		mface_put_hook.3m17n \
		mface_put_prop.3m17n \
		mface_update.3m17n \
		mflt_coverage.3m17n \
		mflt_find.3m17n \
		mflt_get.3m17n \
		mflt_name.3m17n \
		mflt_run.3m17n \
		mfont.3m17n \
		mfont_check.3m17n \
		mfont_close.3m17n \
		mfont_copy.3m17n \
		mfont_encapsulate.3m17n \
		mfont_find.3m17n \
		mfont_from_name.3m17n \
		mfont_get_prop.3m17n \
		mfont_list.3m17n \
		mfont_list_family_names.3m17n \
		mfont_match_p.3m17n \
		mfont_name.3m17n \
		mfont_open.3m17n \
		mfont_parse_name.3m17n \
		mfont_put_prop.3m17n \
		mfont_resize_ratio.3m17n \
		mfont_selection_priority.3m17n \
		mfont_set_encoding.3m17n \
		mfont_set_selection_priority.3m17n \
		mfont_unparse_name.3m17n \
		mfontset.3m17n \
		mfontset_copy.3m17n \
		mfontset_lookup.3m17n \
		mfontset_modify_entry.3m17n \
		mfontset_name.3m17n \
		mframe.3m17n \
		mframe_get_prop.3m17n \
		minput_close_im.3m17n \
		minput_config_command.3m17n \
		minput_config_file.3m17n \
		minput_config_variable.3m17n \
		minput_create_ic.3m17n \
		minput_destroy_ic.3m17n \
		minput_event_to_key.3m17n \
		minput_filter.3m17n \
		minput_get_command.3m17n \
		minput_get_description.3m17n \
		minput_get_title_icon.3m17n \
		minput_get_variable.3m17n \
		minput_lookup.3m17n \
		minput_open_im.3m17n \
		minput_reset_ic.3m17n \
		minput_save_config.3m17n \
		minput_set_spot.3m17n \
		minput_toggle.3m17n \
		mlocale_get_prop.3m17n \
		mlocale_set.3m17n \
		mplist.3m17n \
		mplist_add.3m17n \
		mplist_copy.3m17n \
		mplist_deserialize.3m17n \
		mplist_find_by_key.3m17n \
		mplist_find_by_value.3m17n \
		mplist_get.3m17n \
		mplist_get_func.3m17n \
		mplist_key.3m17n \
		mplist_length.3m17n \
		mplist_next.3m17n \
		mplist_pop.3m17n \
		mplist_push.3m17n \
		mplist_put.3m17n \
		mplist_put_func.3m17n \
		mplist_set.3m17n \
		mplist_value.3m17n \
		msymbol.3m17n \
		msymbol_as_managing_key.3m17n \
		msymbol_exist.3m17n \
		msymbol_get.3m17n \
		msymbol_get_func.3m17n \
		msymbol_is_managing_key.3m17n \
		msymbol_name.3m17n \
		msymbol_put.3m17n \
		msymbol_put_func.3m17n \
		mtext.3m17n \
		mtext_attach_property.3m17n \
		mtext_case_compare.3m17n \
		mtext_casecmp.3m17n \
		mtext_cat.3m17n \
		mtext_cat_char.3m17n \
		mtext_character.3m17n \
		mtext_chr.3m17n \
		mtext_cmp.3m17n \
		mtext_coll.3m17n \
		mtext_compare.3m17n \
		mtext_copy.3m17n \
		mtext_cpy.3m17n \
		mtext_cspn.3m17n \
		mtext_data.3m17n \
		mtext_del.3m17n \
		mtext_deserialize.3m17n \
		mtext_detach_property.3m17n \
		mtext_dup.3m17n \
		mtext_duplicate.3m17n \
		mtext_from_data.3m17n \
		mtext_ftime.3m17n \
		mtext_get_prop.3m17n \
		mtext_get_prop_keys.3m17n \
		mtext_get_prop_values.3m17n \
		mtext_get_properties.3m17n \
		mtext_get_property.3m17n \
		mtext_getenv.3m17n \
		mtext_ins.3m17n \
		mtext_ins_char.3m17n \
		mtext_insert.3m17n \
		mtext_len.3m17n \
		mtext_line_break.3m17n \
		mtext_lowercase.3m17n \
		mtext_ncasecmp.3m17n \
		mtext_ncat.3m17n \
		mtext_ncmp.3m17n \
		mtext_ncpy.3m17n \
		mtext_pbrk.3m17n \
		mtext_pop_prop.3m17n \
		mtext_prop_range.3m17n \
		mtext_property.3m17n \
		mtext_property_end.3m17n \
		mtext_property_key.3m17n \
		mtext_property_mtext.3m17n \
		mtext_property_start.3m17n \
		mtext_property_value.3m17n \
		mtext_push_prop.3m17n \
		mtext_push_property.3m17n \
		mtext_put_prop.3m17n \
		mtext_put_prop_values.3m17n \
		mtext_putenv.3m17n \
		mtext_rchr.3m17n \
		mtext_ref_char.3m17n \
		mtext_replace.3m17n \
		mtext_search.3m17n \
		mtext_serialize.3m17n \
		mtext_set_char.3m17n \
		mtext_spn.3m17n \
		mtext_text.3m17n \
		mtext_titlecase.3m17n \
		mtext_tok.3m17n \
		mtext_uppercase.3m17n
MAN5=		mdbCharsetList.5 mdbCodingList.5 mdbDir.5 \
		mdbFLT.5 mdbFontEncoding.5 mdbFontSize.5 mdbFontset.5 \
		mdbGeneral.5 mdbIM.5 mdbTutorialIM.5

DOCSDIR=	${PREFIX}/share/doc/m17n

do-install:
	${MKDIR} ${DOCSDIR}/en
	@${INSTALL_MAN} ${MAN1:S|^|${WRKSRC}/man/man1/|} ${MANPREFIX}/man/man1
	@${INSTALL_MAN} ${MAN3:S|^|${WRKSRC}/man/man3/|} ${MANPREFIX}/man/man3
	@${INSTALL_MAN} ${MAN5:S|^|${WRKSRC}/man/man5/|} ${MANPREFIX}/man/man5
	${INSTALL_MAN} ${WRKSRC}/usr/latex/m17n-lib.pdf ${DOCSDIR}/en
	(cd ${WRKSRC}/usr/ && ${COPYTREE_SHARE} html ${DOCSDIR}/en/)
.if defined(WITH_JAPANESE)
	${MKDIR} ${DOCSDIR}/ja
	${INSTALL_MAN} ${WRKSRC}/ja/latex/m17n-lib.pdf ${DOCSDIR}/ja
	(cd ${WRKSRC}/ja/ && ${COPYTREE_SHARE} html ${DOCSDIR}/ja/)
.endif

.include <bsd.port.mk>
