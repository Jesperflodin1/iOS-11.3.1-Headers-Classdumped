/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUIPlaceholderProviderFactory, CNUIPRLikenessResolver, CNUILikenessRendering, CNUIUserActionDiscoveringEnvironment, CNUILSApplicationWorkspaceFacade, CNCapabilities, CNUIDefaultUserActionFetcher;
@class CNUIAccountsFacade, CNUIFMFFacade, _DECConsumer, PRPersonaStore, CNUISchedulerProvider, CNContactStore, CNUIMeContactMonitor, CNUIIDSAvailabilityProvider, CNContactChangesNotifier, CNUICoreRecentsManager, CNUIExternalComponentsFactory, CNContactsEnvironment;

@interface CNUIContactsEnvironment : NSObject {

	CNUIAccountsFacade* _accountsFacade;
	CNUIFMFFacade* _fmfFacade;
	_DECConsumer* _duetConsumer;
	PRPersonaStore* _personaStore;
	CNUISchedulerProvider* _defaultSchedulerProvider;
	CNContactStore* _contactStore;
	id<CNUIPlaceholderProviderFactory> _placeholderProviderFactory;
	CNUIMeContactMonitor* _meMonitor;
	id<CNUIPRLikenessResolver> _cachingLikenessResolver;
	id<CNUILikenessRendering> _cachingLikenessRenderer;
	id<CNUIUserActionDiscoveringEnvironment> _actionDiscoveringEnvironment;
	CNUIIDSAvailabilityProvider* _idsAvailabilityProvider;
	id<CNUILSApplicationWorkspaceFacade> _applicationWorkspace;
	id<CNCapabilities> _capabilities;
	id<CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
	CNContactChangesNotifier* _contactChangesNotifier;
	CNUICoreRecentsManager* _recentsManager;
	CNUIExternalComponentsFactory* _componentsFactory;
	CNContactsEnvironment* _cnEnvironment;

}

@property (nonatomic,retain) CNUIAccountsFacade * accountsFacade;                                                //@synthesize accountsFacade=_accountsFacade - In the implementation block
@property (nonatomic,retain) CNUIFMFFacade * fmfFacade;                                                          //@synthesize fmfFacade=_fmfFacade - In the implementation block
@property (nonatomic,retain) _DECConsumer * duetConsumer;                                                        //@synthesize duetConsumer=_duetConsumer - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;                                                      //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) CNUISchedulerProvider * defaultSchedulerProvider;                                   //@synthesize defaultSchedulerProvider=_defaultSchedulerProvider - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;                      //@synthesize placeholderProviderFactory=_placeholderProviderFactory - In the implementation block
@property (nonatomic,retain) CNUIMeContactMonitor * meMonitor;                                                   //@synthesize meMonitor=_meMonitor - In the implementation block
@property (nonatomic,retain) id<CNUIPRLikenessResolver> cachingLikenessResolver;                                 //@synthesize cachingLikenessResolver=_cachingLikenessResolver - In the implementation block
@property (nonatomic,retain) id<CNUILikenessRendering> cachingLikenessRenderer;                                  //@synthesize cachingLikenessRenderer=_cachingLikenessRenderer - In the implementation block
@property (nonatomic,retain) id<CNUIUserActionDiscoveringEnvironment> actionDiscoveringEnvironment;              //@synthesize actionDiscoveringEnvironment=_actionDiscoveringEnvironment - In the implementation block
@property (nonatomic,retain) CNUIIDSAvailabilityProvider * idsAvailabilityProvider;                              //@synthesize idsAvailabilityProvider=_idsAvailabilityProvider - In the implementation block
@property (nonatomic,retain) id<CNUILSApplicationWorkspaceFacade> applicationWorkspace;                          //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,retain) id<CNCapabilities> capabilities;                                                    //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher;                          //@synthesize defaultUserActionFetcher=_defaultUserActionFetcher - In the implementation block
@property (nonatomic,retain) CNContactChangesNotifier * contactChangesNotifier;                                  //@synthesize contactChangesNotifier=_contactChangesNotifier - In the implementation block
@property (nonatomic,retain) CNUICoreRecentsManager * recentsManager;                                            //@synthesize recentsManager=_recentsManager - In the implementation block
@property (nonatomic,retain) CNUIExternalComponentsFactory * componentsFactory;                                  //@synthesize componentsFactory=_componentsFactory - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * cnEnvironment;                                            //@synthesize cnEnvironment=_cnEnvironment - In the implementation block
+(id)currentEnvironment;
+(id)makeCurrentEnvironment;
-(id)init;
-(id<CNUILikenessRendering>)cachingLikenessRenderer;
-(CNUISchedulerProvider *)defaultSchedulerProvider;
-(CNContactChangesNotifier *)contactChangesNotifier;
-(PRPersonaStore *)personaStore;
-(_DECConsumer *)duetConsumer;
-(void)setDuetConsumer:(_DECConsumer *)arg1 ;
-(CNUIExternalComponentsFactory *)componentsFactory;
-(CNUICoreRecentsManager *)recentsManager;
-(id<CNUIUserActionDiscoveringEnvironment>)actionDiscoveringEnvironment;
-(CNContactsEnvironment *)cnEnvironment;
-(CNUIIDSAvailabilityProvider *)idsAvailabilityProvider;
-(id<CNUIPlaceholderProviderFactory>)placeholderProviderFactory;
-(CNUIFMFFacade *)fmfFacade;
-(void)setFmfFacade:(CNUIFMFFacade *)arg1 ;
-(id)initWithContactsEnvironment:(id)arg1 ;
-(id)nts_lazyAccountsFacade;
-(CNUIAccountsFacade *)accountsFacade;
-(id)nts_lazyDuetConsumer;
-(id)nts_lazyPersonaStore;
-(id)nts_lazyContactStore;
-(id)nts_lazyDefaultSchedulerProvider;
-(id)nts_lazyPlaceholderProviderFactory;
-(id)nts_lazyCachingLikenessResolver;
-(id)nts_makeCachingLikenessResolver;
-(id)nts_lazyCachingLikenessRenderer;
-(id)nts_lazyActionDiscoveringEnvironment;
-(id)nts_makeActionDiscoveringEnvironment;
-(id)nts_lazyIDSAvailabilityProvider;
-(id)nts_lazyCapabilities;
-(id)nts_lazyDefaultUserActionFetcher;
-(id)nts_lazyApplicationWorkspace;
-(id<CNUIDefaultUserActionFetcher>)defaultUserActionFetcher;
-(id)nts_lazyContactChangesNotifier;
-(id)nts_makeContactChangesNotifier;
-(id)nts_lazyRecentsManager;
-(id)nts_makeRecentsManager;
-(id)nts_lazyComponentsFactory;
-(id)nts_lazyFMFFacade;
-(id<CNUIPRLikenessResolver>)cachingLikenessResolver;
-(CNUIMeContactMonitor *)meMonitor;
-(void)setAccountsFacade:(CNUIAccountsFacade *)arg1 ;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(void)setDefaultSchedulerProvider:(CNUISchedulerProvider *)arg1 ;
-(void)setPlaceholderProviderFactory:(id<CNUIPlaceholderProviderFactory>)arg1 ;
-(void)setMeMonitor:(CNUIMeContactMonitor *)arg1 ;
-(void)setCachingLikenessResolver:(id<CNUIPRLikenessResolver>)arg1 ;
-(void)setCachingLikenessRenderer:(id<CNUILikenessRendering>)arg1 ;
-(void)setActionDiscoveringEnvironment:(id<CNUIUserActionDiscoveringEnvironment>)arg1 ;
-(void)setIdsAvailabilityProvider:(CNUIIDSAvailabilityProvider *)arg1 ;
-(void)setDefaultUserActionFetcher:(id<CNUIDefaultUserActionFetcher>)arg1 ;
-(void)setContactChangesNotifier:(CNContactChangesNotifier *)arg1 ;
-(void)setRecentsManager:(CNUICoreRecentsManager *)arg1 ;
-(void)setComponentsFactory:(CNUIExternalComponentsFactory *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id<CNCapabilities>)capabilities;
-(void)setCapabilities:(id<CNCapabilities>)arg1 ;
-(id<CNUILSApplicationWorkspaceFacade>)applicationWorkspace;
-(void)setApplicationWorkspace:(id<CNUILSApplicationWorkspaceFacade>)arg1 ;
@end
