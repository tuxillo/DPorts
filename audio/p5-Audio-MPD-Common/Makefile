# New ports collection makefile for:	p5-Audio-MPD-Common
# Date created:				28 Oct 2008
# Whom:	      				chinsan
#
# $FreeBSD: ports/audio/p5-Audio-MPD-Common/Makefile,v 1.12 2012/11/17 05:54:40 svnexp Exp $
#

PORTNAME=	Audio-MPD-Common
PORTVERSION=	1.120881
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sahil@FreeBSD.org
COMMENT=	A bunch of common helper classes for mpd

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Moose>=0.92:${PORTSDIR}/devel/p5-Moose \
		p5-MooseX-Has-Sugar>=0:${PORTSDIR}/devel/p5-MooseX-Has-Sugar \
		p5-Readonly>=0:${PORTSDIR}/devel/p5-Readonly \
		p5-String-Formatter>=0:${PORTSDIR}/devel/p5-String-Formatter
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

MAN3=		Audio::MPD::Common.3 \
		Audio::MPD::Common::Item.3 \
		Audio::MPD::Common::Item::Directory.3 \
		Audio::MPD::Common::Item::Song.3 \
		Audio::MPD::Common::Item::Playlist.3 \
		Audio::MPD::Common::Output.3 \
		Audio::MPD::Common::Stats.3 \
		Audio::MPD::Common::Status.3 \
		Audio::MPD::Common::Time.3 \
		Audio::MPD::Common::Types.3

.include <bsd.port.mk>
