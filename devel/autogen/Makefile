# ex:ts=8
# New ports collection makefile for:	autogen
# Date created:		Mar 11, 2001
# Whom:			Ying-Chieh Liao <ijliao@FreeBSD.org>
#
# $FreeBSD: ports/devel/autogen/Makefile,v 1.71 2012/11/17 05:55:34 svnexp Exp $
#

PORTNAME=	autogen
PORTVERSION=	5.12
CATEGORIES=	devel
MASTER_SITES=	GNU
MASTER_SITE_SUBDIR=	${PORTNAME}/rel${PORTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}:DEFAULT,gnu

MAINTAINER=	clsung@FreeBSD.org
COMMENT=	The Automated Program Generator

BUILD_DEPENDS=	bash:${PORTSDIR}/shells/bash
LIB_DEPENDS=	guile.21:${PORTSDIR}/lang/guile

USE_BZIP2=	yes
USE_GNOME=	gnomehack libxml2
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-libguile=yes --with-libxml2=yes --datadir=${PREFIX}/share
USE_LDCONFIG=	yes

MAN1=	autogen.1 autoopts-config.1 columns.1 getdefs.1 xml2ag.1
MAN3=	ao_string_tokenize.3 configFileLoad.3 optionFileLoad.3 \
	optionFindNextValue.3 optionFindValue.3 optionFree.3 \
	optionGetValue.3 optionLoadLine.3 optionNextValue.3 \
	optionProcess.3 optionRestore.3 optionOnlyUsage.3 \
	optionSaveFile.3 optionSaveState.3 optionUnloadNested.3 \
	optionVersion.3 strequate.3 streqvcmp.3 streqvmap.3 strneqvcmp.3 \
	strtransform.3

INFO=	autogen

.include <bsd.port.mk>
