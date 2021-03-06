# New ports collection makefile for:   ethereal
# Date created:        10 August 1998
# Whom:                Bill Fumerola <billf@chc-chimes.com>
#
# $FreeBSD: ports/net/wireshark/Makefile,v 1.189 2012/12/17 06:26:12 svnexp Exp $
#

PORTNAME?=	wireshark
PORTVERSION=	1.8.4
CATEGORIES=	net ipv6
MASTER_SITES=	http://www.wireshark.org/download/src/ \
		http://ftp.uni-kl.de/pub/wireshark/src/ \
		http://wireshark.askapache.com/download/src/all-versions/ \
		ftp://ftp.uni-kl.de/pub/wireshark/src/ \
		http://prdownloads.sourceforge.net/wireshark/ \
		http://ftp.yz.yamagata-u.ac.jp/pub/network/security/wireshark/src/ \
		ftp://ftp.yz.yamagata-u.ac.jp/pub/network/security/wireshark/src/ \
		http://wireshark.zing.org/download/src/
DISTNAME=	${DATADIR_NAME}-${PORTVERSION}

MAINTAINER=	marcus@FreeBSD.org
COMMENT?=	A powerful network analyzer/capture tool

DATADIR_NAME=	wireshark

USE_PERL5_BUILD=yes
USE_PYTHON_BUILD=yes
USE_GETTEXT=	yes
USE_ICONV=	yes
USE_BZIP2=	yes
USE_GMAKE=	yes
MAKE_JOBS_SAFE=	yes
WANT_GNOME=	yes
USE_OPENSSL=	yes
CONFIGURE_ENV=	LIBS="${WIRESHARK_LIBS}"
CONFIGURE_ARGS+=	--program-transform-name="" \
			--with-ssl=${OPENSSLBASE}
USE_LDCONFIG=	yes
DATADIR=	${PREFIX}/share/${DATADIR_NAME}
LDFLAGS+=	-L${LOCALBASE}/lib
CFLAGS+=	-funit-at-a-time

DESKTOP_ENTRIES=	"Wireshark" "Network Protocol Analyzer" \
			"${DATADIR}/hi48-app-wireshark.png" \
			"wireshark" "System;Monitor;GTK;" true

WIRESHARK_LIBS=

.for x in capinfos editcap mergecap rawshark text2pcap dftest randpkt
.if defined(LITE)
PLIST_SUB+=		${x:tu}="@comment $x not installed"
CONFIGURE_ARGS+=	--enable-$x=no
.else
PLIST_SUB+=		${x:tu}=bin/$x
MAN1+=			$x.1
.endif
.endfor

.if !defined(WITHOUT_X11)
USE_XORG=	x11
.endif

.if !defined(LITE)
OPTIONS=	RTP "Enable support for playing back RTP streams" off \
		SNMP "Enable SNMP OID translation support" on \
		ADNS "Enable asynchronous DNS lookup support" on \
		PCRE "Enable regular expression matching support" on \
		IPV6 "Enable IPv6 support" on \
		GEOIP "Enable GeoIP lookups" on \
		LUA "Enable LUA scripting integration" off \
		CARES "Asynchronous DNS resolution via c-ares" off \
		GSSAPI "Enable Kerberos support" on
.endif

.include <bsd.port.pre.mk>

.if !defined(WITHOUT_X11)
MAN1+=		wireshark.1
PLIST_SUB+=	WIRESHARK=bin/wireshark
USE_GNOME+=	gtk20
WIRESHARK_LIBS+=${PTHREAD_LIBS}
.else
PLIST_SUB+=	WIRESHARK="@comment wireshark not built"
USE_GNOME+=	glib20
CONFIGURE_ARGS+=	--enable-wireshark=no \
			--disable-gtktest
.endif

GNU_CONFIGURE=	yes
LIBTOOLFILES=	configure wiretap/configure
PLIST_SUB+=	PORTVERSION=${PORTVERSION}

.if !defined(WITHOUT_IPV6)
CONFIGURE_ARGS+=	--enable-ipv6=yes
.else
CONFIGURE_ARGS+=	--enable-ipv6=no
.endif

# XXX - untested
.if defined(WITH_THREADS)
CONFIGURE_ARGS+=	--enable-threads
.endif

.if !defined(WITHOUT_PCRE) && !defined(LITE)
LIB_DEPENDS+=	pcre:${PORTSDIR}/devel/pcre
CONFIGURE_ARGS+=	--with-pcre=${LOCALBASE}/lib
.else
CONFIGURE_ARGS+=	--with-pcre=no
.endif

.if defined(WITH_LUA) && !defined(LITE)
USE_LUA=	5.1
CONFIGURE_ARGS+=--with-lua=${LUA_PREFIX}
PLIST_SUB+=	LUA=""
.else
CONFIGURE_ARGS+=--without-lua
PLIST_SUB+=	LUA="@comment "
.endif

.if defined(WITH_RTP) && !defined(LITE)
LIB_DEPENDS+=	portaudio:${PORTSDIR}/audio/portaudio
CONFIGURE_ARGS+=--with-portaudio=${LOCALBASE}
WIRESHARK_LIBS+=${PTHREAD_LIBS}
.else
CONFIGURE_ARGS+=--without-portaudio
.endif

.if !defined(WITHOUT_SNMP) && !defined(LITE)
LIB_DEPENDS+=		smi:${PORTSDIR}/net-mgmt/libsmi
CONFIGURE_ARGS+=	--with-libsmi=${LOCALBASE}
.else
CONFIGURE_ARGS+=	--with-libsmi=no
.endif

.if !defined(WITHOUT_ADNS) && !defined(LITE)
LIB_DEPENDS+=	adns:${PORTSDIR}/dns/adns
CONFIGURE_ARGS+=	--with-adns=${LOCALBASE}/lib
.else
CONFIGURE_ARGS+=	--with-adns=no
.endif

.if !defined(WITHOUT_CARES) && !defined(LITE)
LIB_DEPENDS+=		cares:${PORTSDIR}/dns/c-ares
CONFIGURE_ARGS+=	--with-c-ares=${LOCALBASE}/lib
.else
CONFIGURE_ARGS+=	--with-c-ares=no
.endif

.if !defined(WITHOUT_GEOIP) && !defined(LITE)
LIB_DEPENDS+=	GeoIP:${PORTSDIR}/net/GeoIP
CONFIGURE_ARGS+=	--with-geoip=${LOCALBASE}/lib
.else
CONFIGURE_ARGS+=	--with-geoip=no
.endif

.if !defined(WITHOUT_GNUTLS)
LIB_DEPENDS+=	gnutls:${PORTSDIR}/security/gnutls \
		gcrypt:${PORTSDIR}/security/libgcrypt
CONFIGURE_ARGS+=--with-libgcrypt-prefix=${LOCALBASE} \
		--with-gnutls=yes
.else
CONFIGURE_ARGS+=--with-gnutls=no
.endif

.if !defined(WITHOUT_LIBGCRYPT)
LIB_DEPENDS+=	gcrypt:${PORTSDIR}/security/libgcrypt
CONFIGURE_ARGS+=--with-libgcrypt-prefix=${LOCALBASE}
.endif

.if defined(WITHOUT_GSSAPI)
CONFIGURE_ARGS+=--with-krb5=no
.endif

MAN1+=	dumpcap.1 tshark.1
MAN4+=	wireshark-filter.4

post-patch:
	@${REINPLACE_CMD} -e 's|%%LUA_INCDIR%%|${LUA_INCDIR}|g ; \
	    	s|%%LUA_LIBDIR%%|${LUA_LIBDIR}|g' \
		${WRKSRC}/configure

post-install:
	${INSTALL_DATA} ${WRKSRC}/image/hi48-app-wireshark.png ${DATADIR}

.include <bsd.port.post.mk>
