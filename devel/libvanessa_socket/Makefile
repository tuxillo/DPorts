# Created by: Konstantinos Konstantinidis <kkonstan@daemon.gr>
# $FreeBSD: ports/devel/libvanessa_socket/Makefile,v 1.23 2012/12/11 14:25:12 svnexp Exp $

PORTNAME=	libvanessa_socket
PORTVERSION=	0.0.12
CATEGORIES=	devel
MASTER_SITES=	http://horms.net/projects/vanessa/download/vanessa_socket/${PORTVERSION}/
DISTNAME=	vanessa_socket-${PORTVERSION}

MAINTAINER=	thomas@bsdunix.ch
COMMENT=	Library that provides a simple layer for TCP/IP socket operations

LIB_DEPENDS=	vanessa_logger:${PORTSDIR}/devel/libvanessa_logger \
		popt:${PORTSDIR}/devel/popt

MAN1=		vanessa_socket_pipe.1

USE_BZIP2=	yes
USE_AUTOTOOLS=	libtool
USE_GNOME=	gnomehack
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	${REINPLACE_CMD} -e '/^SUBDIRS/s|debian||' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
