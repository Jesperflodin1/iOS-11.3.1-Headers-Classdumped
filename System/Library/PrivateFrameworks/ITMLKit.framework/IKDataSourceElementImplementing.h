/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, IKElementChangeSet;


@protocol IKDataSourceElementImplementing <NSObject>
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,readonly) IKElementChangeSet * itemsChangeset; 
@required
-(void)teardown;
-(long long)numberOfItems;
-(void)initializeWithElementFactory:(id)arg1;
-(void)configureUpdatesWithImplementation:(id)arg1;
-(void)applyUpdatesWithImplementation:(id)arg1 usingUpdater:(/*^block*/id)arg2;
-(long long)indexOfItemForChildElement:(id)arg1;
-(void)resetUpdates;
-(id)actualElementForProxyElement:(id)arg1;
-(void)updateStylesUsingUpdater:(/*^block*/id)arg1;
-(id)prototypeForItemAtIndex:(long long)arg1;
-(id)elementForItemAtIndex:(long long)arg1;
-(IKElementChangeSet *)itemsChangeset;
-(void)loadIndex:(long long)arg1;
-(void)unloadIndex:(long long)arg1;
-(NSArray *)prototypes;

@end

