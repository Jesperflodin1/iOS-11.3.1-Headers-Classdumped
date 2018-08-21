/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPlugIn;
@class NSString, NSBundle, IMBalloonApp, NSMutableDictionary, NSMutableArray;

@interface IMBalloonPlugin : NSObject {

	BOOL _pluginLoaded;
	NSString* _browserImageName;
	NSString* _browserImagePath;
	long long _browserGroup;
	NSBundle* _bundle;
	id<PKPlugIn> _plugin;
	IMBalloonApp* _app;
	NSMutableDictionary* _messageToDatasourceMap;
	NSMutableDictionary* _messageToBalloonControllerMap;
	Class _bubbleClass;
	Class _browserClass;
	Class _dataSourceClass;
	Class _customTypingIndicatorLayerClass;
	Class _entryClass;
	NSMutableArray* _balloonControllerPool;

}

@property (nonatomic,retain) NSBundle * bundle;                                                //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin;                                              //@synthesize plugin=_plugin - In the implementation block
@property (assign,nonatomic) BOOL pluginLoaded;                                                //@synthesize pluginLoaded=_pluginLoaded - In the implementation block
@property (nonatomic,retain) IMBalloonApp * app;                                               //@synthesize app=_app - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageToDatasourceMap;                     //@synthesize messageToDatasourceMap=_messageToDatasourceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageToBalloonControllerMap;              //@synthesize messageToBalloonControllerMap=_messageToBalloonControllerMap - In the implementation block
@property (nonatomic,retain) Class bubbleClass;                                                //@synthesize bubbleClass=_bubbleClass - In the implementation block
@property (nonatomic,retain) Class browserClass;                                               //@synthesize browserClass=_browserClass - In the implementation block
@property (nonatomic,retain) Class dataSourceClass;                                            //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,retain) Class customTypingIndicatorLayerClass;                            //@synthesize customTypingIndicatorLayerClass=_customTypingIndicatorLayerClass - In the implementation block
@property (nonatomic,retain) Class entryClass;                                                 //@synthesize entryClass=_entryClass - In the implementation block
@property (nonatomic,retain) NSString * browserImageName;                                      //@synthesize browserImageName=_browserImageName - In the implementation block
@property (nonatomic,retain) NSString * browserImagePath;                                      //@synthesize browserImagePath=_browserImagePath - In the implementation block
@property (assign,nonatomic) long long browserGroup;                                           //@synthesize browserGroup=_browserGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * balloonControllerPool;                           //@synthesize balloonControllerPool=_balloonControllerPool - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) NSString * browserDisplayName; 
@property (nonatomic,retain,readonly) NSBundle * pluginBundle; 
@property (nonatomic,retain,readonly) NSBundle * appBundle; 
@property (nonatomic,readonly) BOOL showInBrowser; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) BOOL shouldHideAppSwitcher; 
@property (nonatomic,readonly) NSString * version; 
@property (getter=isBetaPlugin,nonatomic,readonly) BOOL betaPlugin; 
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(BOOL)isEnabled;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(id<PKPlugIn>)plugin;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
-(NSString *)version;
-(id)dataSourceForPluginPayload:(id)arg1 ;
-(id)initWithBundle:(id)arg1 app:(id)arg2 ;
-(void)setPluginLoaded:(BOOL)arg1 ;
-(void)setBrowserGroup:(long long)arg1 ;
-(void)setBrowserImageName:(NSString *)arg1 ;
-(void)setBrowserImagePath:(NSString *)arg1 ;
-(void)unloadBundle;
-(void)setBubbleClass:(Class)arg1 ;
-(void)setBrowserClass:(Class)arg1 ;
-(void)setCustomTypingIndicatorLayerClass:(Class)arg1 ;
-(void)setEntryClass:(Class)arg1 ;
-(id)_getControllerFromReusePoolForChatItem:(id)arg1 ;
-(NSMutableDictionary *)messageToDatasourceMap;
-(BOOL)isStickerPackOnly;
-(Class)entryClass;
-(BOOL)pluginLoaded;
-(void)moveController:(id)arg1 toReusePoolFromChatItem:(id)arg2 ;
-(void)removeController:(id)arg1 forChatItem:(id)arg2 ;
-(id)existingDataSourceForMessageGUID:(id)arg1 ;
-(NSString *)browserImagePath;
-(long long)browserGroup;
-(void)setMessageToDatasourceMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)messageToBalloonControllerMap;
-(void)setMessageToBalloonControllerMap:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)balloonControllerPool;
-(void)setBalloonControllerPool:(NSMutableArray *)arg1 ;
-(void)setDataSourceClass:(Class)arg1 ;
-(NSString *)browserDisplayName;
-(Class)customTypingIndicatorLayerClass;
-(Class)dataSourceClass;
-(Class)bubbleClass;
-(BOOL)shouldHideAppSwitcher;
-(IMBalloonApp *)app;
-(BOOL)showInBrowser;
-(Class)browserClass;
-(NSString *)browserImageName;
-(NSBundle *)pluginBundle;
-(NSBundle *)appBundle;
-(id)balloonControllerForChatItem:(id)arg1 ;
-(BOOL)isBetaPlugin;
-(id)existingBalloonControllerWithMessageGUID:(id)arg1 ;
-(void)insertDataSource:(id)arg1 forGUID:(id)arg2 ;
-(BOOL)supportsControllerReuse;
-(void)setApp:(IMBalloonApp *)arg1 ;
@end

