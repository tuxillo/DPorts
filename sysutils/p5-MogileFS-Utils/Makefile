# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: ports/sysutils/p5-MogileFS-Utils/Makefile,v 1.25 2013/01/16 15:44:25 svnexp Exp $

PORTNAME=	MogileFS-Utils
PORTVERSION=	2.27
CATEGORIES=	sysutils net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DORMANDO
PKGNAMEPREFIX=	p5-

MAINTAINER=	trociny@FreeBSD.org
COMMENT=	MogileFS tools

BUILD_DEPENDS=	p5-MogileFS-Client>=1.16:${PORTSDIR}/sysutils/p5-MogileFS-Client \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		mogadm.1 \
		mogdelete.1 \
		mogfetch.1 \
		mogfiledebug.1 \
		mogfileinfo.1 \
		moglistfids.1 \
		moglistkeys.1 \
		mogrename.1 \
		mogstats.1 \
		mogtool.1 \
		mogupload.1
MAN3=		MogileFS::Utils.3

post-patch:
	@${REINPLACE_CMD} -e '/NAME/ s|MogileFS-Utils|MogileFS::Utils|' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
