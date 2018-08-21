/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _KSDeviceInfo : NSObject {

	BOOL _needsUpdate;
	NSString* _name;
	NSString* _swVersion;
	NSString* _model;
	NSString* _modelDisplayName;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * swVersion;                     //@synthesize swVersion=_swVersion - In the implementation block
@property (nonatomic,copy) NSString * model;                         //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * modelDisplayName;              //@synthesize modelDisplayName=_modelDisplayName - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                       //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)ksDecviceWithiCloudDeviceInfo:(id)arg1 ;
+(id)ksDecviceWithName:(id)arg1 swVersion:(id)arg2 model:(id)arg3 modelDisplayName:(id)arg4 ;
+(id)ksDeviceWithName:(id)arg1 needsUpgrade:(BOOL)arg2 ;
+(id)ksDeviceWithName:(id)arg1 swVersion:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)needsUpdate;
-(NSString *)model;
-(NSString *)modelDisplayName;
-(void)setModel:(NSString *)arg1 ;
-(void)setSwVersion:(NSString *)arg1 ;
-(void)setModelDisplayName:(NSString *)arg1 ;
-(NSString *)swVersion;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end

