# New ports collection makefile for:	p5-AnyEvent-Gearman
# Date created:		2012-04-15
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-AnyEvent-Gearman/Makefile,v 1.2 2012/11/17 05:56:04 svnexp Exp $
#

PORTNAME=	AnyEvent-Gearman
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Asynchronous Gearman client/worker module for AnyEvent applications

RUN_DEPENDS=	p5-Any-Moose>=0:${PORTSDIR}/devel/p5-Any-Moose \
		p5-AnyEvent>=0:${PORTSDIR}/devel/p5-AnyEvent \
		p5-Mouse>=0:${PORTSDIR}/devel/p5-Mouse \
		p5-MouseX-Foreign>=0:${PORTSDIR}/devel/p5-MouseX-Foreign \
		p5-Object-Container>=0:${PORTSDIR}/devel/p5-Object-Container \
		p5-Object-Event>=0:${PORTSDIR}/devel/p5-Object-Event

PERL_CONFIGURE=	yes

MAN3=		AnyEvent::Gearman.3 \
		AnyEvent::Gearman::Client.3 \
		AnyEvent::Gearman::Client::Connection.3 \
		AnyEvent::Gearman::Connection.3 \
		AnyEvent::Gearman::Constants.3 \
		AnyEvent::Gearman::Job.3 \
		AnyEvent::Gearman::Task.3 \
		AnyEvent::Gearman::Types.3 \
		AnyEvent::Gearman::Worker.3 \
		AnyEvent::Gearman::Worker::Connection.3

.include <bsd.port.mk>
