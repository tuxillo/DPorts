# New ports collection makefile for:	p5-Mail-OpenDKIM
# Date created:				Wed Apr 27 14:36:42 EDT 2011
# Whom:					Vivek Khera <vivek@khera.org>
#
# $FreeBSD: ports/mail/p5-Mail-OpenDKIM/Makefile,v 1.6 2012/11/17 05:59:09 svnexp Exp $
#

PORTNAME=	Mail-OpenDKIM
PORTVERSION=	3680
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vivek@khera.org
COMMENT=	Perl interface to OpenDKIM C library

BUILD_DEPENDS=	opendkim>=2.5.0:${PORTSDIR}/mail/opendkim
LIB_DEPENDS=	opendkim:${PORTSDIR}/mail/opendkim
RUN_DEPENDS=	opendkim>=2.5.0:${PORTSDIR}/mail/opendkim

TEST_DEPENDS=	p5-Error>=0:${PORTSDIR}/lang/p5-Error \
		p5-Test-Kwalitee>=0:${PORTSDIR}/devel/p5-Test-Kwalitee

PERL_CONFIGURE=	yes

MAN3=		Mail::OpenDKIM.3 Mail::OpenDKIM::DKIM.3 \
		Mail::OpenDKIM::PrivateKey.3 Mail::OpenDKIM::Signature.3 \
		Mail::OpenDKIM::Signer.3
PLIST_FILES=	%%SITE_PERL%%/%%PERL_ARCH%%/Mail/OpenDKIM.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/Mail/OpenDKIM/DKIM.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/Mail/OpenDKIM/PrivateKey.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/Mail/OpenDKIM/Signature.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/Mail/OpenDKIM/Signer.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Mail/OpenDKIM/.packlist \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Mail/OpenDKIM/OpenDKIM.bs \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/Mail/OpenDKIM/OpenDKIM.so
PLIST_DIRS=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/Mail/OpenDKIM \
		%%SITE_PERL%%/%%PERL_ARCH%%/Mail/OpenDKIM
PLIST_DIRSTRY=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/Mail \
		%%SITE_PERL%%/%%PERL_ARCH%%/Mail

.include <bsd.port.mk>
