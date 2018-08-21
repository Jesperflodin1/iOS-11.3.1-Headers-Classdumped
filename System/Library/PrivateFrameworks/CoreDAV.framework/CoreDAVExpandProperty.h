/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject {

	NSSet* _propertiesToFind;
	NSString* _expandedName;
	NSString* _expandedNameSpace;

}

@property (nonatomic,retain) NSSet * propertiesToFind;                  //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
@property (nonatomic,retain) NSString * expandedName;                   //@synthesize expandedName=_expandedName - In the implementation block
@property (nonatomic,retain) NSString * expandedNameSpace;              //@synthesize expandedNameSpace=_expandedNameSpace - In the implementation block
-(void)setPropertiesToFind:(NSSet *)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(NSString *)expandedName;
-(void)setExpandedName:(NSString *)arg1 ;
-(NSString *)expandedNameSpace;
-(void)setExpandedNameSpace:(NSString *)arg1 ;
-(NSSet *)propertiesToFind;
@end

