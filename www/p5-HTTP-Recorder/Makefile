# New ports collection makefile for:	p5-HTTP-Recorder
# Date created:				1 April 2004
# Whom:	      				mat
#
# $FreeBSD: ports/www/p5-HTTP-Recorder/Makefile,v 1.10 2012/11/17 06:02:51 svnexp Exp $
#

PORTNAME=	HTTP-Recorder
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Record interaction with websites

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-HTTP-Proxy>=0:${PORTSDIR}/www/p5-HTTP-Proxy \
		p5-HTTP-Request-Params>=0:${PORTSDIR}/www/p5-HTTP-Request-Params \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
USE_DOS2UNIX=	yes

MAN1=		httprecorder.1
MAN3=		HTTP::Recorder.3

post-patch:
	@${RM} -f ${WRKSRC}/lib/HTTP/Recorder.pm.orig

.include <bsd.port.mk>
