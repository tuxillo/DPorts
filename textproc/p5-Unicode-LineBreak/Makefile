# New ports collection makefile for:	textproc/p5-Unicode-LineBreak
# Date created:				05 February 2011
# Whom:					Olivier Girard <Olivier.Girard@univ-angers.fr>
#
# $FreeBSD: ports/textproc/p5-Unicode-LineBreak/Makefile,v 1.4 2012/12/16 06:16:59 svnexp Exp $
#

PORTNAME=	Unicode-LineBreak
PORTVERSION=	1.008.2
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

# blanket update approval granted.
MAINTAINER=	Olivier.Girard@univ-angers.fr
COMMENT=	Unicode-LineBreak package

BUILD_DEPENDS=	p5-MIME-Charset>=0:${PORTSDIR}/mail/p5-MIME-Charset
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

CONFIGURE_ARGS+=	--with-bundled-sombok \
			--disable-libthai

MAN3=		Unicode::LineBreak.3 \
		Unicode::GCString::JA_JP.3 \
		Text::LineFold.3 \
		Unicode::LineBreak::JA_JP.3 \
		Unicode::GCString.3 \
		Text::LineFold::JA_JP.3

.include <bsd.port.mk>
