/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIStatusBarVisualProvider.h>

@class _UIStatusBar, _UIStatusBarStyleAttributes, NSString;

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider> {

	_UIStatusBar* _statusBar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                              //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) _UIStatusBarStyleAttributes * styleAttributes; 
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
-(_UIStatusBar *)statusBar;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(_UIStatusBarStyleAttributes *)styleAttributes;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
@end
