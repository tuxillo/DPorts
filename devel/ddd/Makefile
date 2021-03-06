# ex:ts=8
# Ports collection makefile for:  ddd
# Date created:			  Tue Jan 28, 1997
# Whom:				  David O'Brien (obrien@NUXI.com)
#
# $FreeBSD: ports/devel/ddd/Makefile,v 1.74 2012/11/17 05:55:40 svnexp Exp $
#

PORTNAME=	ddd
PORTVERSION=	3.3.12
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	sergio@softshark.org
COMMENT=	Data Display Debugger -- a common graphical front-end for GDB/DBX/XDB

USE_GMAKE=	yes
USE_XORG=	xpm
USE_MOTIF=	yes
GNU_CONFIGURE=	yes

CFLAGS+=	-Wno-deprecated
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--with-motif-libraries="${LIBXMDIR}" \
		--with-readline-libraries=/usr/lib

PLIST_SUB=	VERSION=${PORTVERSION}

MAN1=		ddd.1
DOCS=		AUTHORS INSTALL PROBLEMS README TIPS TODO \
		doc/html/ddd.html doc/ddd-paper.ps \
		doc/ddd-themes.pdf doc/ddd.pdf
INFO=		ddd ddd-themes

.if defined(MOTIFLIB)
.if defined(MOTIF_STATIC)
LIBXMDIR!=	${ECHO_CMD} ${MOTIFLIB} | ${SED} -e 's/\/libXm\.a//g' | ${AWK} '{print $$1}'
.else
LIBXMDIR!=	${ECHO_CMD} ${MOTIFLIB} | ${SED} -e 's/-L//g' | ${AWK} '{print $$1}'
.endif
.else
LIBXMDIR=	${LOCALBASE}
.endif

pre-patch:
	@${RM} -fv ${WRKSRC}/ddd/ddd.info*
	@${RM} -fv ${WRKSRC}/ddd/ddd-themes.info*

pre-configure:
	@${FIND} ${WRKSRC} -name configure | ${XARGS} \
		${REINPLACE_CMD} -e "s|-O2||"

post-configure:
	@${ECHO_CMD} "LIBXM = ${MOTIFLIB}" >> ${WRKSRC}/ddd/Makefile

post-install:
.if !defined(NOPORTDOCS)
	@${INSTALL} -d -o ${DOCOWN} -g ${DOCGRP} ${DOCSDIR}
.for file in ${DOCS}
	@${INSTALL_DATA} ${WRKSRC}/${file} ${DOCSDIR}
.endfor
	@${GZIP_CMD} ${DOCSDIR}/*.ps
.endif

check:
	(cd ${WRKSRC} ; ${GMAKE} check)

.include <bsd.port.mk>
