# Ports collection Makefile for:		SVN::Notify
# Date created:					22 Feb 2005
# Whom:						dom@happygiraffe.net
#
# $FreeBSD: ports/devel/p5-SVN-Notify/Makefile,v 1.32 2012/11/17 05:56:28 svnexp Exp $
#

PORTNAME=	SVN-Notify
PORTVERSION=	2.83
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Subversion activity notification

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Net-SMTP_auth>=0:${PORTSDIR}/mail/p5-Net-SMTP_auth \
		p5-Text-Trac>=0.10:${PORTSDIR}/textproc/p5-Text-Trac \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes

MAN1=		svnnotify.1
MAN3=		SVN::Notify.3 SVN::Notify::Alternative.3 SVN::Notify::HTML.3 \
		SVN::Notify::HTML::ColorDiff.3 SVN::Notify::Filter.3 SVN::Notify::Filter::Trac.3

.include <bsd.port.mk>
