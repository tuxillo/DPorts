# New ports collection makefile for:	p5-Apache-ASP
# Date created:				31 December 1999
# Whom:					Igor Vinokurov <igor@zynaps.ru>
#
# $FreeBSD: ports/www/p5-Apache-ASP/Makefile,v 1.36 2012/12/17 10:27:26 svnexp Exp $
#

PORTNAME=	Apache-ASP
PORTVERSION=	2.61
PORTREVISION=	4
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
PKGNAMESUFFIX=	${MODPERL_SUFFIX}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Active Server Pages for Apache

RUN_DEPENDS=	p5-Devel-Symdump>=0:${PORTSDIR}/devel/p5-Devel-Symdump \
		p5-HTML-Clean>=0:${PORTSDIR}/www/p5-HTML-Clean \
		p5-HTML-FillInForm>=0:${PORTSDIR}/www/p5-HTML-FillInForm \
		p5-HTTP-Date>=0:${PORTSDIR}/www/p5-HTTP-Date \
		p5-MLDBM>=0:${PORTSDIR}/databases/p5-MLDBM \
		p5-MLDBM-Sync>=0.25:${PORTSDIR}/databases/p5-MLDBM-Sync \
		p5-Tie-Cache>=0:${PORTSDIR}/devel/p5-Tie-Cache \
		p5-XML-LibXSLT>=0:${PORTSDIR}/textproc/p5-XML-LibXSLT


# XXX not tested with mod_perl2, but mod_perl was removed ...
#.if !defined(WITHOUT_MODPERL)
#RUN_DEPENDS+=	ap13-mod_perl>=0:${PORTSDIR}/www/mod_perl \
#		p5-Apache-Filter>=0:${PORTSDIR}/www/p5-Apache-Filter \
#		p5-Apache-SSI>=0:${PORTSDIR}/www/p5-Apache-SSI
#MODPERL_SUFFIX?=+mod_perl
#.endif

PERL_CONFIGURE=	yes

MAN1=		asp-perl.1
MAN3=		Apache::ASP.3 \
		Apache::ASP::CGI::Table.3 \
		Bundle::Apache::ASP.3 \
		Bundle::Apache::ASP::Extra.3

.include <bsd.port.mk>
