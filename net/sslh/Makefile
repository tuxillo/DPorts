# New ports collection makefile for:	sslh
# Date created:		2010-03-29
# Whom:			Jui-Nan Lin <jnlin@csie.nctu.edu.tw>
#
# $FreeBSD: ports/net/sslh/Makefile,v 1.9 2012/11/18 16:55:40 svnexp Exp $
#

PORTNAME=	sslh
PORTVERSION=	1.13
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://www.rutschle.net/tech/

MAINTAINER=	olivier@cochard.me
COMMENT=	A ssl/ssh multiplexer

LICENSE=    GPLv2

DISTFILES=	${PORTNAME}-${PORTVERSION}b.tar.gz

LIB_DEPENDS=	config:${PORTSDIR}/devel/libconfig

USE_GMAKE=	yes
USE_PERL5_BUILD=	yes

OPTIONS_DEFINE=	MANPAGES EXAMPLES
OPTIONS_DEFAULT=	MANPAGES EXAMPLES

CFLAGS+=	-I${LOCALBASE}/include
MAKE_ENV+=	LIBS="-L${LOCALBASE}/lib"

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MMANPAGES}
MAN8=		sslh.8
.endif

USE_RC_SUBR=	sslh

PORTEXAMPLES=	example.cfg
MANCOMPRESSED=	yes

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/sslh-fork ${PREFIX}/sbin
	@${INSTALL_PROGRAM} ${WRKSRC}/sslh-select ${PREFIX}/sbin
	#@${MKDIR} ${VARDIR}/run/${PORTNAME}
	#@${CHOWN} -R nobody:nobody ${VARDIR}/run/${PORTNAME}
.if ${PORT_OPTIONS:MMANPAGES}
	@${INSTALL_MAN} ${WRKSRC}/sslh.8.gz ${MANPREFIX}/man/man8
.endif
.if ${PORT_OPTIONS:MEXAMPLES}
	@${MKDIR} ${EXAMPLESDIR}
	@${INSTALL_DATA} ${WRKSRC}/${PORTEXAMPLES} ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
