# New ports collection makefile for:    boodler
# Date created:		2003/12/30
# Whom:			Dan Pelleg <daniel+boodler@pelleg.org>
#
# $FreeBSD: ports/audio/boodler/Makefile,v 1.13 2012/11/17 05:54:29 svnexp Exp $
#

PORTNAME=	boodler
PORTVERSION=	1.5.3
PORTREVISION=	3
CATEGORIES=	audio
MASTER_SITES=	http://www.eblong.com/zarf/boodler/
DISTFILES=	boodler-153.tar.gz boodler-snd-021902.tar.gz

MAINTAINER=	daniel+boodler@pelleg.org
COMMENT=	A programmable soundscape tool

RESTRICTED=	no commercial use
RESTRICTED_FILES=	boodler-snd-021902.tar.gz
USE_GMAKE=	yes
USE_PYTHON=	yes
DRIVER?=	oss
WRKSRC=		${WRKDIR}/${PORTNAME}
BHOME=		${PREFIX}/share/boodler

pre-everything::
	@${ECHO} ""
	@${ECHO} "The following build options are available for Boodler:"
	@${ECHO} ""
	@${ECHO} "      DRIVER=OSS	Configure to use /dev/dsp."
	@${ECHO} "      DRIVER=ESD	Configure to use EsounD."
	@${ECHO} "      DRIVER=FILE	Configure to write raw PCM data to a file."
	@${ECHO} ""
	@${ECHO} "Boodler can only be configured to use one of these"
	@${ECHO} "interfaces. The default is to use OSS."
	@${ECHO} ""

.if ${DRIVER:tl} == "oss"
# Probably nothing here...
.endif

.if ${DRIVER:tl} == "esd"
LIB_DEPENDS+=	esd.2:${PORTSDIR}/audio/esound
PKGNAMESUFFIX=	-esd
.endif

.if ${DRIVER:tl} == "file"
PKGNAMESUFFIX=	-file
.endif

.include <bsd.port.pre.mk>

.if ${ARCH} == "x86_64" || ${ARCH} == "ia64" || ${ARCH} == "powerpc" || ${ARCH} == "sparc64"
PIC=	--PIC
.endif

post-patch:
	${REINPLACE_CMD} -e "s|^booroot=.*|booroot=${PREFIX}/share/boodler|" ${WRKSRC}/wrapper/boodler
	@${RMDIR} ${WRKDIR}/boodler-snd/string

do-build:
	(cd ${WRKSRC} && ${PYTHON_CMD} configure.py --driver ${DRIVER:tl} ${PIC} --include ${PREFIX}/include --lib ${PREFIX}/lib && make)
	@${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py ${WRKSRC}/effects ${WRKSRC}/boodle/

do-install:
	@${ECHO_MSG} "Installing files"
	@${INSTALL_SCRIPT} ${WRKSRC}/wrapper/boodler ${PREFIX}/bin/
	@${MKDIR} ${BHOME}
	@${INSTALL_SCRIPT} ${WRKSRC}/boodler.py ${BHOME}
	@${MKDIR} ${BHOME}/boodle/ ${BHOME}/effects/ ${BHOME}/boodler-snd/
	@${CHMOD} -R u+w,a+r,og-w ${WRKDIR}/boodler-snd
	@${FIND} ${WRKDIR}/boodler-snd -type d -print0 | ${XARGS} -0 ${CHMOD} 755
	@cd ${WRKDIR} && ${CP} -pPR boodler/boodle boodler/effects boodler-snd ${BHOME}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/doc/*.html ${DOCSDIR}
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.post.mk>
