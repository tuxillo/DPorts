# Created by: Sergei Vyshenski
# $FreeBSD: ports/devel/p5-Workflow/Makefile,v 1.23 2012/12/10 17:45:22 svnexp Exp $

PORTNAME=	Workflow
PORTVERSION=	1.35
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh@pn.sinp.msu.ru
COMMENT=	Simple, flexible system to implement workflows

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Class-Observable>=0:${PORTSDIR}/devel/p5-Class-Observable \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-DBD-Mock>=0:${PORTSDIR}/databases/p5-DBD-Mock \
		p5-Class-Factory>=0:${PORTSDIR}/devel/p5-Class-Factory \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class \
		p5-DateTime-Format-Strptime>=0:${PORTSDIR}/devel/p5-DateTime-Format-Strptime \
		p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple \
		p5-Log-Dispatch>=0:${PORTSDIR}/devel/p5-Log-Dispatch \
		p5-Log-Log4perl>=0:${PORTSDIR}/devel/p5-Log-Log4perl \
		p5-Data-UUID>=0:${PORTSDIR}/devel/p5-Data-UUID \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception \
		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp
BUILD_DEPENDS=	p5-Class-Observable>=0:${PORTSDIR}/devel/p5-Class-Observable \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-DBD-Mock>=0:${PORTSDIR}/databases/p5-DBD-Mock \
		p5-Class-Factory>=0:${PORTSDIR}/devel/p5-Class-Factory \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class \
		p5-DateTime-Format-Strptime>=0:${PORTSDIR}/devel/p5-DateTime-Format-Strptime \
		p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple \
		p5-Log-Dispatch>=0:${PORTSDIR}/devel/p5-Log-Dispatch \
		p5-Log-Log4perl>=0:${PORTSDIR}/devel/p5-Log-Log4perl \
		p5-Data-UUID>=0:${PORTSDIR}/devel/p5-Data-UUID \
		p5-DBI>=0:${PORTSDIR}/databases/p5-DBI \
		p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception \
		p5-File-Slurp>=0:${PORTSDIR}/devel/p5-File-Slurp

PERL_CONFIGURE=	yes

MAN3=	Workflow.3 \
	Workflow::Action.3 \
	Workflow::Action::InputField.3 \
	Workflow::Action::Mailer.3 \
	Workflow::Action::Null.3 \
	Workflow::Base.3 \
	Workflow::Condition.3 \
	Workflow::Condition::CheckReturn.3 \
	Workflow::Condition::Evaluate.3 \
	Workflow::Condition::GreedyOR.3 \
	Workflow::Condition::HasUser.3 \
	Workflow::Condition::LazyAND.3 \
	Workflow::Condition::LazyOR.3 \
	Workflow::Condition::Nested.3 \
	Workflow::Config.3 \
	Workflow::Config::Perl.3 \
	Workflow::Config::XML.3 \
	Workflow::Context.3 \
	Workflow::Exception.3 \
	Workflow::Factory.3 \
	Workflow::History.3 \
	Workflow::Persister.3 \
	Workflow::Persister::DBI.3 \
	Workflow::Persister::DBI::AutoGeneratedId.3 \
	Workflow::Persister::DBI::ExtraData.3 \
	Workflow::Persister::DBI::SequenceId.3 \
	Workflow::Persister::File.3 \
	Workflow::Persister::RandomId.3 \
	Workflow::Persister::SPOPS.3 \
	Workflow::Persister::UUID.3 \
	Workflow::State.3 \
	Workflow::Validator.3 \
	Workflow::Validator::HasRequiredField.3 \
	Workflow::Validator::InEnumeratedType.3 \
	Workflow::Validator::MatchesDateFormat.3

.if !defined(NOPORTEXAMPLES)
PORTEXAMPLES=	*
.endif
.if !defined(NOPORTDATA)
PORTDATA=	*
.endif
.if !defined(NOPORTDOCS)
PORTDOCS=	*
.endif

post-install:
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@(cd ${WRKSRC}/eg && ${COPYTREE_SHARE} ticket/\* ${EXAMPLESDIR}/)
	@${ECHO_MSG} "===> Examples installed in ${EXAMPLESDIR}."
.endif
.if !defined(NOPORTDATA)
	@${MKDIR} ${DATADIR}
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} struct/\* ${DATADIR}/)
	@${ECHO_MSG} "===> SQL data structures installed in ${DATADIR}."
.endif
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC}/ && ${CP} -R README Changes TODO doc ${DOCSDIR}/)
	@${ECHO_MSG} "===> Docs are installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>
