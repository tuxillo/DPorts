# Created by: ijliao
# $FreeBSD: ports/textproc/denature/Makefile,v 1.10 2012/12/10 13:48:08 svnexp Exp $

PORTNAME=	denature
PORTVERSION=	0.6.5
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A HTML to PDF converter

RUN_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-HTML-Tagset>=0:${PORTSDIR}/www/p5-HTML-Tagset \
		p5-HTML-Tree>=0:${PORTSDIR}/www/p5-HTML-Tree \
		p5-CSS-Tiny>=0:${PORTSDIR}/textproc/p5-CSS-Tiny \
		fop:${PORTSDIR}/textproc/fop

USE_PERL5=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.6+
POD2MAN?=	pod2man
WRKSRC=		${WRKDIR}/${PORTNAME}

MAN1=		denature.1
PLIST_FILES=	bin/denature

post-patch:
	@${PERL} -pi -e "s|%%LOCALBASE%%|${LOCALBASE}| ; \
		s|%%JAVA_HOME%%|${JAVA_HOME}|" ${WRKSRC}/denature

do-build:
	cd ${WRKSRC} && ${POD2MAN} denature > denature.1

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/denature ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/denature.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
