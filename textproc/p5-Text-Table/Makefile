# New ports collection makefile for:	textproc/p5-Text-Table
# Date created:				May  2004
# Whom:					Autrijus Tang <autrijus@autrijus.org>
#
# $FreeBSD: ports/textproc/p5-Text-Table/Makefile,v 1.11 2012/11/17 06:02:10 svnexp Exp $
#

PORTNAME=	Text-Table
PORTVERSION=	1.124
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Organize Data in Tables

BUILD_DEPENDS=	p5-Text-Aligner>=0.05:${PORTSDIR}/textproc/p5-Text-Aligner
RUN_DEPENDS=	p5-Text-Aligner>=0.05:${PORTSDIR}/textproc/p5-Text-Aligner

PERL_CONFIGURE=	yes

MAN3=		Text::Table.3

.include <bsd.port.mk>
