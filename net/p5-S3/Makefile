# New ports collection makefile for:	p5-S3
# Date created:		2007-04-30
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/net/p5-S3/Makefile,v 1.9 2012/12/17 15:43:22 svnexp Exp $
#

PORTNAME=	S3
PORTVERSION=	20071102
CATEGORIES=	net perl5
MASTER_SITES=	http://s3.amazonaws.com/doc/s3-example-code/
PKGNAMEPREFIX=	p5-
DISTNAME=	s3-example-perl-library

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A library in Perl for working with the Amazon S3 REST interface

RUN_DEPENDS=	p5-Digest-HMAC>=0:${PORTSDIR}/security/p5-Digest-HMAC \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww

NO_BUILD=	yes
USE_PERL5_RUN=	yes
USE_ZIP=	yes
WRKSRC=		${WRKDIR}/s3-example-libraries/perl

do-install:
	${MKDIR} ${PREFIX}/${SITE_PERL_REL}/S3
	${INSTALL_DATA} ${WRKSRC}/S3/* ${PREFIX}/${SITE_PERL_REL}/S3
	${INSTALL_DATA} ${WRKSRC}/S3.pm ${PREFIX}/${SITE_PERL_REL}
	${INSTALL_SCRIPT} ${WRKSRC}/s3-*.pl ${PREFIX}/bin

.include <bsd.port.mk>
