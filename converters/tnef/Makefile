# Created by: Cyrus Rahman <cr@jcmax.com>
# $FreeBSD: ports/converters/tnef/Makefile,v 1.32 2012/11/17 05:55:05 svnexp Exp $

PORTNAME=	tnef
PORTVERSION=	1.4.9
CATEGORIES=	converters mail
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/

MAINTAINER=	garga@FreeBSD.org
COMMENT=	Unpack data in MS Outlook TNEF format

OPTIONS_DEFINE=	DOCS

USE_GCC=	any
GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN1=		tnef.1
PORTDOCS=	AUTHORS NEWS README THANKS TODO
PLIST_FILES=	bin/tnef

.include <bsd.port.pre.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

# This target is intended to be run by the port maintainer.
x-test: build
.for dir in cmdline files
	@cd ${WRKSRC}/tests/${dir} && ${MAKE} check-TESTS
.endfor

.include <bsd.port.post.mk>
