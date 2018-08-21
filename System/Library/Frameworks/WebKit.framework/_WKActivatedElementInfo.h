/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, NSString, NSDictionary, UIImage;

@interface _WKActivatedElementInfo : NSObject {

	RetainPtr<NSURL>* _URL;
	RetainPtr<NSString>* _title;
	CGPoint _interactionLocation;
	RetainPtr<NSString>* _ID;
	RefPtr<WebKit::ShareableBitmap, WTF::DumbPtrTraits<WebKit::ShareableBitmap> >* _image;
	RetainPtr<UIImage>* _uiImage;
	RetainPtr<NSDictionary>* _userInfo;
	long long _type;
	CGRect _boundingRect;

}

@property (nonatomic,readonly) CGPoint _interactionLocation; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGRect boundingRect;                       //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,copy,readonly) UIImage * image; 
+(id)activatedElementInfoWithInteractionInformationAtPosition:(const InteractionInformationAtPosition*)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(long long)type;
-(UIImage *)image;
-(NSURL *)URL;
-(CGRect)boundingRect;
-(id)_initWithInteractionInformationAtPosition:(const InteractionInformationAtPosition*)arg1 ;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 location:(CGPoint)arg3 title:(id)arg4 ID:(id)arg5 rect:(CGRect)arg6 image:(ShareableBitmap*)arg7 userInfo:(id)arg8 ;
-(id)_initWithType:(long long)arg1 URL:(id)arg2 location:(CGPoint)arg3 title:(id)arg4 ID:(id)arg5 rect:(CGRect)arg6 image:(ShareableBitmap*)arg7 ;
-(CGPoint)_interactionLocation;
-(NSString *)ID;
@end
