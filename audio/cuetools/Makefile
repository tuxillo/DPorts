# New ports collection makefile for:	cuetools
# Date created:		30 December 2003
# Whom:			Vincent Tantardini <vinc@FreeBSD-fr.org>
#
# $FreeBSD: ports/audio/cuetools/Makefile,v 1.19 2012/11/17 05:54:29 svnexp Exp $
#

PORTNAME=	cuetools
PORTVERSION=	1.3.1
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	BERLIOS

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A set of utilities for working with cue files and toc files

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GMAKE=	yes
GNU_CONFIGURE=	yes

MAN1=		cuebreakpoints.1 cueconvert.1 cueprint.1
PORTDOCS=	README
PORTEXAMPLES=	cuetag.sh
PLIST_FILES=	bin/cuebreakpoints bin/cueconvert bin/cueprint

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/
.endif
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/extras/cuetag.sh ${EXAMPLESDIR}/
.endif

.include <bsd.port.mk>
