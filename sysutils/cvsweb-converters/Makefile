# New ports collection makefile for:	cvsweb-converters
# Date created:		4 Mar 2001
# Whom:			Martin Kammerhofer <mkamm@gmx.net>
#
# $FreeBSD: ports/sysutils/cvsweb-converters/Makefile,v 1.21 2012/11/17 06:01:27 svnexp Exp $
#

PORTNAME=	cvsweb-converters
PORTVERSION=	0.3.4
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://mitglied.multimania.de/mkamm/distfiles/ \
		http://www.student.tugraz.at/kammerhofer/distfiles/

MAINTAINER=	mkamm@gmx.net
COMMENT=	Create hyperlinks to cvsweb from cvs[up] output or FreeBSD commitlogs

RUN_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-Config-IniFiles>=0:${PORTSDIR}/devel/p5-Config-IniFiles \
		p5-Time-modules>=0:${PORTSDIR}/devel/p5-Time-modules
BUILD_DEPENDS:=	${RUN_DEPENDS}

NO_BUILD=	yes
USE_BZIP2=	yes
USE_PERL5=	yes
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/commitlog2cvsweb bin/cvsrdiff2cvsweb \
		bin/cvsuplog2cvsweb etc/cvsweb-converters.conf.sample
PKGMESSAGE=	${WRKDIR}/pkg-message

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500903
RUN_DEPENDS+=	p5-IO-Compress>=2.017:${PORTSDIR}/archivers/p5-IO-Compress
.endif

post-install:
	@${SED} -e 's|$${PREFIX}|${PREFIX}|g' -- \
		${.CURDIR}/pkg-message >${PKGMESSAGE}
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
