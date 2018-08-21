/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/STTextRenderCollector.h>
#import <libobjc.A.dylib/STTangierTextRepBehavior.h>

@class NSMutableDictionary, NSDictionary, NSString;

@interface STTangierTextRenderCollector : NSObject <STTextRenderCollector, STTangierTextRepBehavior> {

	NSMutableDictionary* _flows;
	NSDictionary* _previousFlows;
	NSMutableDictionary* _layoutsByComponentIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * flows;                                     //@synthesize flows=_flows - In the implementation block
@property (nonatomic,retain) NSDictionary * previousFlows;                                    //@synthesize previousFlows=_previousFlows - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * layoutsByComponentIdentifier;              //@synthesize layoutsByComponentIdentifier=_layoutsByComponentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)flows;
-(void)addTextStorage:(id)arg1 withLayout:(id)arg2 forNamedFlow:(id)arg3 directLayerHostView:(id)arg4 selectable:(BOOL)arg5 componentIdentifier:(id)arg6 ;
-(id)flowLayoutForComponentIdentifier:(id)arg1 ;
-(id)infoForStorage:(id)arg1 selection:(id)arg2 ;
-(void)buildFlowsAndUpdateInfosWithICC:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(BOOL)tangierTextRepAllowsSelection:(id)arg1 ;
-(NSDictionary *)previousFlows;
-(id)itemWithIdentifier:(id)arg1 storage:(id)arg2 inItems:(id)arg3 ;
-(void)storeItem:(id)arg1 forFlowName:(id)arg2 ;
-(void)setPreviousFlows:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)layoutsByComponentIdentifier;
-(void)buildFlowsAndUpdateInfosWithICC:(id)arg1 ;
-(void)setFlows:(NSMutableDictionary *)arg1 ;
-(void)setLayoutsByComponentIdentifier:(NSMutableDictionary *)arg1 ;
@end

