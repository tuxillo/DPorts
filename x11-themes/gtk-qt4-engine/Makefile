# Created by: Kris Moore <kris@pcbsd.org>
# $FreeBSD: ports/x11-themes/gtk-qt4-engine/Makefile,v 1.45 2012/11/17 06:03:31 svnexp Exp $

PORTNAME=	gtk-qt-engine
PORTVERSION=	1.1
PORTREVISION=	9
CATEGORIES=	x11-themes
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	makc@FreeBSD.org
COMMENT=	GTK+ 2.x theme engine allowing to use Qt/KDE styles

USE_BZIP2=	yes
USE_GETTEXT=	yes
USE_GNOME=	gtk20
USE_QT4=	moc_build rcc_build uic_build qmake_build
USE_CMAKE=	yes
USE_KDE4=	kdelibs kdeprefix automoc4
WRKSRC=		${WRKDIR}/${PORTNAME}
MAKE_JOBS_SAFE=	yes

OPTIONS_DEFINE=	BONOBO
BONOBO_DESC=	Better support for Bonobo (GNOME) framework

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MBONOBO}
USE_GNOME+=	libbonoboui
.endif

post-patch:
.if !${PORT_OPTIONS:MBONOBO}
	@${REINPLACE_CMD} -e '/^PKGCONFIG(libbonoboui/d' \
		${WRKSRC}/CMakeLists.txt
.endif
	@${REINPLACE_CMD} -e 's,/usr/local,${LOCALBASE},g' \
		${WRKSRC}/kcm_gtk/searchpaths.cpp \
		${WRKSRC}/src/rcproperties.cpp

.include <bsd.port.mk>
