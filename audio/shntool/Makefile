# Created by: Bill Fenner <fenner@FreeBSD.org>
# $FreeBSD: ports/audio/shntool/Makefile,v 1.28 2012/12/17 11:13:57 svnexp Exp $

PORTNAME=	shntool
PORTVERSION=	3.0.10
CATEGORIES=	audio
MASTER_SITES=	http://www.etree.org/shnutils/shntool/dist/src/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Multi-purpose .wav processing utility

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes
SHN_ALIASES=	tool len fix hash pad join split cat cmp cue conv info strip gen trim
PLIST_FILES=	${SHN_ALIASES:S|^|bin/shn|}
MAN1=		shntool.1

OPTIONS_DEFINE=	AIFF SHN FLAC APE OFR LPAC WV ALAC LA TTA BONK KXS
AIFF_DESC=	AIFF support via sox
SHN_DESC=	Shorten support
OFR_DESC=	OptimFROG support
LPAC_DESC=	LPAC support
WV_DESC=	WavPack support
ALAC_DESC=	Apple Lossless Audio support
LA_DESC=	Laudio support
TTA_DESC=	TTA Lossless Audio support
BONK_DESC=	Bonk lossy/lossless audio support
KXS_DESC=	Kexis support

RDEP=	AIFF:sox SHN:shorten FLAC APE:mac OFR:ofr:optimfrog LPAC WV:wavpack \
	ALAC:alac LA:laudio TTA:ttaenc:tta BONK KXS:kexis

.include <bsd.port.options.mk>

.for i in ${RDEP}
o=	${i:C/:.*//}
.	if ${PORT_OPTIONS:M${o}}
b=	${i:C/^[A-Z]*://:C/:.*//:tl}
p=	${i:C/^[A-Z]*://:C/.*://:tl}
RUN_DEPENDS+=	${b}:${PORTSDIR}/audio/${p}
RUN_DEPENDS:=	${RUN_DEPENDS}
.	endif
.endfor

.include <bsd.port.mk>
