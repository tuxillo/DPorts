# Created by: Zhihao Yuan <lichray@gmail.com>
# $FreeBSD: ports/chinese/libpinyin/Makefile,v 1.4 2012/11/17 05:54:57 svnexp Exp $

PORTNAME=	libpinyin
PORTVERSION=	0.7.91
CATEGORIES=	chinese textproc
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}

MAINTAINER=	lichray@gmail.com
COMMENT=	Library to deal with pinyin

MAN1=		libpinyin.1 gen_binary_files.1 gen_unigram.1 \
		import_interpolation.1

USE_BDB=	yes
USE_GNOME=	glib20 gnomehack pkgconfig
USE_GETTEXT=	yes
GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	libtool
USE_GMAKE=	yes
USE_LDCONFIG=	yes

CONFIGURE_ARGS+=CPPFLAGS="-I${LOCALBASE}/include \
		-I${BDB_INCLUDE_DIR} -D_WITH_GETLINE" \
		LDFLAGS="-L${LOCALBASE}/lib -l${BDB_LIB_NAME}"

PLIST_SUB+=	VER=${PORTVERSION}

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 800107
IGNORE=		does not compile on FreeBSD 7.X
.endif

.include <bsd.port.post.mk>
