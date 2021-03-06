# New ports collection makefile for:	skencil
# Date created:		04 November 1998
# Whom:			Thomas Gellekum <tg@FreeBSD.org>
#
# $FreeBSD: ports/graphics/skencil/Makefile,v 1.49 2012/11/17 05:58:23 svnexp Exp $
#

PORTNAME=	skencil
PORTVERSION=	1.0.a784
CATEGORIES=	graphics
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.a/alpha_rev/}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An interactive drawing program

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}imaging>0:${PORTSDIR}/graphics/py-imaging
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}imaging>0:${PORTSDIR}/graphics/py-imaging \
		${PYTHON_PKGNAMEPREFIX}reportlab>0:${PORTSDIR}/print/py-reportlab \
		${PYTHON_PKGNAMEPREFIX}tkinter>0:${PORTSDIR}/x11-toolkits/py-tkinter \
		${PYXML}

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION:R}alpha

PROJECTHOST=	sk1
USE_XORG=	x11 xext
USE_TCL_BUILD=	yes
USE_TCL=	yes
USE_TK_BUILD=	yes
USE_TK=		yes
USE_GETTEXT=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PYDISTUTILS_EGGINFO=	${PORTNAME}-${PORTVERSION:R}alpha-py${PYTHON_VER}.egg-info

CFLAGS+=	-I${TK_INCLUDEDIR} -I${LOCALBASE}/include \
		-L${LOCALBASE}/lib

.include <bsd.port.pre.mk>

post-patch:
	 @${REINPLACE_CMD} -e \
		"s|/usr/include|${LOCALBASE}/include|g ; \
		 s|/usr/lib|${LOCALBASE}/lib|g ; \
		 /tcl_ver/s|8\.[0-9]|${TCL_VER:S/.//}|g ; \
		 /libtcl/s|8\.[0-9]|${TCL_VER:S/.//}|g ; \
		 /libraries/s|tcl_ver\])|tcl_ver, 'intl'])|g ; \
		 s|/usr/share|${PREFIX}/share|g" ${WRKSRC}/setup.py

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.post.mk>
