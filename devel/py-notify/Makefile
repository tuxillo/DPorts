# $FreeBSD: ports/devel/py-notify/Makefile,v 1.13 2012/12/31 17:09:07 svnexp Exp $

PORTNAME=	notify
PORTVERSION=	0.1.1
DISTVERSIONPREFIX=python-
PORTREVISION=	9
CATEGORIES=	devel python
MASTER_SITES=	http://www.galago-project.org/files/releases/source/notify-python/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A python bindings for libnotify

LIB_DEPENDS=	notify.4:${PORTSDIR}/devel/libnotify

USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack pygtk2
USE_PYTHON=	yes
GNU_CONFIGURE=	yes

DOCS=		AUTHORS COPYING ChangeLog NEWS

post-extract:
	@${RM} ${WRKSRC}/src/pynotify.c

.ifndef (NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
.for i in ${DOCS}
	@${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
