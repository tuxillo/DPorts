# New ports collection makefile for:	rsnapshot
# Date created:		2004-01-03
# Whom:			Ralf van Dooren <r.vdooren@snow.nl>
#
# $FreeBSD: ports/sysutils/rsnapshot/Makefile,v 1.17 2012/11/17 06:01:43 svnexp Exp $
#

PORTNAME=	rsnapshot
PORTVERSION=	1.3.1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.rsnapshot.org/downloads/

MAINTAINER=	r.vdooren@snow.nl
COMMENT=	Filesystem snapshot utility based on rsync(1)

BUILD_DEPENDS=	rsync:${PORTSDIR}/net/rsync
RUN_DEPENDS=	rsync:${PORTSDIR}/net/rsync \
		p5-Lchown>=0:${PORTSDIR}/sysutils/p5-Lchown

USE_PERL5=	yes
GNU_CONFIGURE=	yes

MAN1=		rsnapshot.1 rsnapshot-diff.1
PORTDOCS=	AUTHORS ChangeLog README TODO

post-patch:
	${REINPLACE_CMD} -e 's,/usr/bin/pod2man,pod2man,' ${WRKSRC}/Makefile.in

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
