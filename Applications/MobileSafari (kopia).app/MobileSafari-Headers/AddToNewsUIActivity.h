//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplicationExtensionActivity.h"

@class TabDocument;

@interface AddToNewsUIActivity : UIApplicationExtensionActivity
{
    TabDocument *_tabDocument;
}

+ (id)activityWithTabDocument:(id)arg1 error:(id *)arg2;
+ (long long)activityCategory;
@property(retain, nonatomic) TabDocument *tabDocument; // @synthesize tabDocument=_tabDocument;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)init;
- (id)initWithApplicationExtension:(id)arg1 tabDocument:(id)arg2;

@end
