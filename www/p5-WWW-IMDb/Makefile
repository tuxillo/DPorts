# New ports collection makefile for:	p5-WWW-IMDb
# Date created:				Wed Jul  17 08:00:30 2001
# Whom:					Michael L. Hostbaek (mich@freebsdcluster.org)
#
# $FreeBSD: ports/www/p5-WWW-IMDb/Makefile,v 1.8 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	IMDb
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	ftp://ftp.rhapsodyk.net/pub/devel/perl/
PKGNAMEPREFIX=	p5-WWW-
DISTNAME=	IMDb-current

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Perl interface to query the Internet Movie Database(IMDb)

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PERL_CONFIGURE=	yes

MAN3=		IMDb.3 IMDb::People.3 IMDb::Title.3

.include <bsd.port.mk>
