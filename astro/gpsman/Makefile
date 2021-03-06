# New ports collection makefile for:	gpsman
# Date created:		26 November 2001
# Whom:			David Wolfskill
#
# $FreeBSD: ports/astro/gpsman/Makefile,v 1.29 2012/11/17 05:54:25 svnexp Exp $
#

PORTNAME=	gpsman
PORTVERSION=	6.4.3
CATEGORIES=	astro tk geography
MASTER_SITES=	SF/${PORTNAME}/distrib
EXTRACT_SUFX=	.tgz

MAINTAINER=	david@catwhisker.org
COMMENT=	A Tcl/Tk-based GPS management utility

#RUN_DEPENDS=	wish8.4:${PORTSDIR}/x11-toolkits/tk84
USE_TK_RUN=	84

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
SUB_FILES=	pkg-message
NO_BUILD=	yes
PORTDOCS=	*
PORTDATA=	*
PLIST_FILES=	bin/gpsman

# MAN1=		gpsman.1
# MANCOMPRESSED=	yes

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800045
GPSMAN_DEFAULT_PORT?=	/dev/cuad0
.else
GPSMAN_DEFAULT_PORT?=	/dev/cuau0
.endif

post-patch:
	@(cd ${WRKSRC} && ${REINPLACE_CMD} "s|/dev/ttyS0|${GPSMAN_DEFAULT_PORT}|" \
 		util/exerciser.tcl manual/html/info/l_realtime.doc.txt gpsman.tcl)

pre-install:
	@${REINPLACE_CMD} -e "s:%%PREFIX%%:${PREFIX}:g" ${WRKSRC}/gpsman.tcl

do-install:
	@${MKDIR} ${PREFIX}/share/gpsman/gmsrc/gmicons
	@${MKDIR} ${PREFIX}/share/gpsman/util
	${INSTALL_DATA} ${WRKSRC}/gmsrc/*.tcl ${PREFIX}/share/gpsman/gmsrc
	${INSTALL_DATA} ${WRKSRC}/gmsrc/gmicons/* ${PREFIX}/share/gpsman/gmsrc/gmicons
	${INSTALL_DATA} ${WRKSRC}/util/*.sh ${PREFIX}/share/gpsman/util
	${INSTALL_DATA} ${WRKSRC}/util/*.tcl ${PREFIX}/share/gpsman/util
	${INSTALL_SCRIPT} ${WRKSRC}/gpsman.tcl ${PREFIX}/share/gpsman
	${LN} -fs ${PREFIX}/share/gpsman/gpsman.tcl ${PREFIX}/bin/gpsman
#	${INSTALL_MAN} ${WRKSRC}/gpsman.1 ${PREFIX}/man/man1
.if !defined(NOPORTDOCS)
	@${MKDIR} ${PREFIX}/share/doc/gpsman/html/info
	${INSTALL_DATA} ${WRKSRC}/manual/*.pdf ${PREFIX}/share/doc/gpsman
	${INSTALL_DATA} ${WRKSRC}/manual/html/*.html ${PREFIX}/share/doc/gpsman/html
	${RM} ${PREFIX}/share/doc/gpsman/html/index.html
	${LN} ${PREFIX}/share/doc/gpsman/html/GPSMandoc.html ${PREFIX}/share/doc/gpsman/html/index.html
	${INSTALL_DATA} ${WRKSRC}/manual/html/*.gif ${PREFIX}/share/doc/gpsman/html
.for i in gif txt ps
	${INSTALL_DATA} ${WRKSRC}/manual/html/info/*.${i} ${PREFIX}/share/doc/gpsman/html/info
.endfor
	@${CAT} ${PKGMESSAGE}
.endif

.include <bsd.port.post.mk>
