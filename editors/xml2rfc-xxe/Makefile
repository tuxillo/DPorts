# Created by: Bill Fenner
#
# $FreeBSD: ports/editors/xml2rfc-xxe/Makefile,v 1.17 2012/11/17 05:57:19 svnexp Exp $

PORTNAME=	xml2rfc-xxe
PORTVERSION=	0.8.0
CATEGORIES=	editors
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMESUFFIX=	${XXE_VERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	xml2rfc configuration for XMLMind XML editor

RUN_DEPENDS=	xxe:${PORTSDIR}/editors/xxe

USE_ZIP=	YES
NO_BUILD=	YES
WRKSRC=		${WRKDIR}/xml2rfc

PLIST_SUB=	XXE_DIR=${XXE_DIR}

post-extract:
	@${RM} ${WRKSRC}/svn-commit.tmp

do-install:
	@cd ${WRKDIR} && tar cf - xml2rfc | \
		tar -C ${PREFIX}/lib/${XXE_DIR}/addon -xf -

.include "../xxe/Makefile.inc"

.include <bsd.port.mk>
