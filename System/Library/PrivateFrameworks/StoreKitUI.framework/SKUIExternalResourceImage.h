/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface SKUIExternalResourceImage : NSObject {

	BOOL _alwaysTemplate;
	NSString* _imageName;
	NSBundle* _bundle;

}

@property (nonatomic,copy) NSString * imageName;               //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) BOOL alwaysTemplate;              //@synthesize alwaysTemplate=_alwaysTemplate - In the implementation block
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(BOOL)alwaysTemplate;
-(void)setAlwaysTemplate:(BOOL)arg1 ;
@end
