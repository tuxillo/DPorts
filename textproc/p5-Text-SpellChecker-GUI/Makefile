# New ports collection makefile for:	p5-Text-SpellChecker-GUI
# Date created:		2009-09-27
# Whom:			Zane C, Bowers <vvelox@vvelox.net>
#
# $FreeBSD: ports/textproc/p5-Text-SpellChecker-GUI/Makefile,v 1.5 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-SpellChecker-GUI
PORTVERSION=	0.0.2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VVELOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Implements a user interface to Text::SpellChecker using ZConf::GUI

BUILD_DEPENDS=	p5-Curses-UI>=0:${PORTSDIR}/devel/p5-Curses-UI \
		p5-String-ShellQuote>=0:${PORTSDIR}/textproc/p5-String-ShellQuote \
		p5-ZConf-GUI>=0:${PORTSDIR}/devel/p5-ZConf-GUI \
		p5-Text-SpellChecker>=0:${PORTSDIR}/textproc/p5-Text-SpellChecker

PERL_CONFIGURE=	yes

MAN3=		Text::SpellChecker::GUI.3 \
		Text::SpellChecker::GUI::Curses.3

.include <bsd.port.mk>
