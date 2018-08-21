/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NSSExternalAnalyticsPaneldentifierProvider : NSObject {

	NSString* _panelIdentifier;
	NSArray* _hostNames;

}

@property (nonatomic,copy,readonly) NSArray * hostNames;                //@synthesize hostNames=_hostNames - In the implementation block
@property (nonatomic,readonly) NSString * panelIdentifier;              //@synthesize panelIdentifier=_panelIdentifier - In the implementation block
-(id)panelIdentifierWithHostNames:(id)arg1 ;
-(id)initWithHostNames:(id)arg1 ;
-(NSString *)panelIdentifier;
-(NSArray *)hostNames;
@end
