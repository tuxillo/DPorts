# ex:ts=8
# New ports collection makefile for:	bibelot
# Date created:		Jan 8, 2001
# Whom:			Ying-Chieh Liao <ijliao@FreeBSD.org>
#
# $FreeBSD: ports/palm/bibelot/Makefile,v 1.12 2012/11/17 06:00:43 svnexp Exp $
#

PORTNAME=	bibelot
PORTVERSION=	0.9.4
CATEGORIES=	palm
MASTER_SITES=	SF/${PORTNAME}/Bibelot/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Formats and converts text documents into compressed PalmDoc .pdb files

PLIST_FILES=	bin/bibelot
USE_PERL5=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
