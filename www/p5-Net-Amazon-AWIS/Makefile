# New ports collection makefile for:	p5-Net-Amazon-AWIS
# Date created:		2007-05-02
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/p5-Net-Amazon-AWIS/Makefile,v 1.6 2012/11/17 06:02:52 svnexp Exp $
#

PORTNAME=	Net-Amazon-AWIS
PORTVERSION=	0.36
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use the Amazon Alexa Web Information Service

BUILD_DEPENDS=	p5-IO-Prompt>=0:${PORTSDIR}/devel/p5-IO-Prompt \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-DateTime-Format-Strptime>=0:${PORTSDIR}/devel/p5-DateTime-Format-Strptime \
		p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

PERL_CONFIGURE=	yes

MAN3=		Net::Amazon::AWIS.3

.include <bsd.port.mk>
