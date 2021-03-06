# New ports collection makefile for:	chu
# Date created:				September 16 2006
# Whom:					Diane Bruce <db@db.net>
#
# $FreeBSD: ports/comms/chu/Makefile,v 1.3 2012/11/17 05:54:59 svnexp Exp $
#

PORTNAME=	chu
PORTVERSION=	0.1.29
CATEGORIES=	comms hamradio
MASTER_SITES=	${MASTER_SITE_SUNSITE} \
		http://www.rossi.com/chu/
MASTER_SITE_SUBDIR=	system/admin/time

MAINTAINER=	db@FreeBSD.org
COMMENT=	Synchronise computer clock to CHU radio station

MAN8=	chu.8

do-extract:
	@${RM} -rf ${WRKDIR}
	@${MKDIR} ${WRKDIR}
	@${MKDIR} ${WRKSRC}
	@for f in ${EXTRACT_ONLY}; do  \
		if ! (cd ${WRKSRC} && ${EXTRACT_CMD} ${EXTRACT_BEFORE_ARGS} ${_DISTDIR}/$$f ${EXTRACT_AFTER_ARGS});\
		then \
			exit 1; \
		fi \
	done
	${EXTRACT_CMD} -d ${WRKSRC}/testsignal.gz

post-patch:
	${REINPLACE_CMD} -e 's|/etc/chu|${PREFIX}/etc/chu|g' ${WRKSRC}/chu.c ${WRKSRC}/chu.8
	${REINPLACE_CMD} -e 's|/sbin/chu|${PREFIX}/sbin/chu|g' ${WRKSRC}/chu.8
	@${REINPLACE_CMD} -e 's|gcc -O2|${CC} ${CFLAGS}|g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/chu ${PREFIX}/sbin
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/testsignal ${DATADIR}
	${INSTALL_MAN} ${WRKSRC}/chu.8 ${PREFIX}/man/man8
.if	!defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
.for	d in ${WRKSRC}/COPYING \
	${WRKSRC}/TESTING \
	${WRKSRC}/chu.html \
	${WRKSRC}/chuman.html \
	${WRKSRC}/ntp.html
	${INSTALL_DATA} ${WRKSRC}/${d} ${DOCSDIR}
.endfor
	@${ECHO} ""
	@${ECHO} "chu docs installed in ${DOCSDIR}"
	@${ECHO} ""
.endif

.include <bsd.port.mk>
