# New ports collection makefile for:	ACH
# Date Created: 			2010-10-05
# Whom:					Carlo Strub <c-s@c-s.li>
#
# $FreeBSD: ports/www/ach/Makefile,v 1.4 2012/11/17 06:02:27 svnexp Exp $
#

PORTNAME=	ACH
PORTVERSION=	1.0.2
CATEGORIES=	www
MASTER_SITES=	http://cloud.github.com/downloads/Burton/Analysis-of-Competing-Hypotheses/
EXTRACT_SUFX=	-alpha.tar

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A free, open source tool for complex research problems

LICENSE=	GPLv3

USE_MYSQL=	yes
USE_PHP=	yes
IGNORE_WITH_PHP=	4

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}-alpha
NO_BUILD=	yes
SUB_FILES+=	pkg-message
PKGMESSAGE=	${WRKDIR}/pkg-message
WWWDIR?=	${PREFIX}/www/${PORTNAME}

# Get rid of temp files packaged in the upstream distfile
post-extract:
	@${FIND} ${WRKSRC} -type f -not -name .htaccess -a \
		-name .\* -delete

do-install:
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${WWWDIR}
	@${CHOWN} -R ${WWWOWN}:${WWWGRP} ${WWWDIR}
	@${ECHO_CMD} '@exec ${CHOWN} -R ${WWWOWN}:${WWWGRP} \
		${WWWDIR:S|^${PREFIX}/|%D/|}' >> ${TMPPLIST}
	@${FIND} ${WWWDIR} -type f -print0 | ${XARGS} -0 ${CHMOD} 644
	@${ECHO_CMD} '@exec ${FIND} ${WWWDIR} -type f -print0 | \
		${XARGS} -0 ${CHMOD} 644' >> ${TMPPLIST}
	@${FIND} ${WWWDIR} -type d -print0 | ${XARGS} -0 ${CHMOD} 755
	@${ECHO_CMD} '@exec ${FIND} ${WWWDIR} -type d -print0 | \
		${XARGS} -0 ${CHMOD} 755' >> ${TMPPLIST}

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
