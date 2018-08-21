/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <UIKit/_UICloudSharingControllerDelegate_Internal.h>
#import <UIKit/_UIDocumentSharingControllerDelegate_Private.h>

@class NSString, UIViewController, UIImage;

@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private> {

	NSString* _activityTitle;
	UIViewController* _activityViewController;
	UIImage* _activityImage;

}

@property (nonatomic,retain) UIViewController * activityViewController; 
@property (nonatomic,retain) NSString * activityTitle;                               //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) UIImage * activityImage;                                //@synthesize activityImage=_activityImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
+(BOOL)_allowDocumentSharing;
+(BOOL)_allowFolderSharing;
-(NSString *)activityTitle;
-(id)activityType;
-(UIImage *)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(UIViewController *)activityViewController;
-(BOOL)_activitySupportsPromiseURLs;
-(void)setActivityTitle:(NSString *)arg1 ;
-(void)setActivityImage:(UIImage *)arg1 ;
-(void)_setupForSharingInfo;
-(void)_setupForInitialSharing;
-(void)setActivityViewController:(UIViewController *)arg1 ;
-(void)_cloudShareControllerDidDismiss:(id)arg1 ;
-(void)_documentSharingControllerDidDismiss:(id)arg1 ;
@end

