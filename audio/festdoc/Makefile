# New ports collection makefile for:	festdoc
# Date created:        			2000-06-16
# Whom:					Trevor Johnson
# based on the NetBSD port
#
# $NetBSD: Makefile,v 1.7 2000/01/05 17:56:46 wiz Exp $
# $FreeBSD: ports/audio/festdoc/Makefile,v 1.12 2012/11/17 05:54:30 svnexp Exp $
#

PORTNAME=	festdoc
PORTVERSION=	1.4.0.1
CATEGORIES=	audio accessibility
MASTER_SITES=	${MASTER_SITE_FESTIVAL}
MASTER_SITE_SUBDIR=	1.4.1
DIST_SUBDIR=	festival

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Documentation for Festival

NO_BUILD=	yes

INFO=		festival
FDOC=		${PREFIX}/share/doc/festival

post-extract:
	${CHMOD} -R a+r ${WRKSRC}
	${FIND} ${WRKSRC} -type d -print0 | ${XARGS} -0 ${CHMOD} 755
	${RM} ${WRKSRC}/festival/src-manual/c3750.htm~
	${RM} ${WRKSRC}/speechtools/c16909.htm~
	${RMDIR} ${WRKSRC}/festival/src-manual/images_gen

do-install:
	${MKDIR} ${FDOC}
	${RM} ${WRKSRC}/festival/info/festival.info.orig
	cd ${WRKSRC} && info=`${FIND} . -name '*.info*' -type f` && \
	  ${CP} $$info ${PREFIX}/info && \
	  ${CP} -r ${WRKSRC}/* ${FDOC} && \
	  cd ${FDOC} && \
	  ${RM} -f $$info && \
	  ${RMDIR} festival/info

.include <bsd.port.mk>
