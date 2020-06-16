//
//  MMAquaTabStyle.h
//  MMTabBarView
//
//  Created by John Pannell on 2/17/06.
//  Copyright 2006 Positive Spin Media. All rights reserved.
//

#if __has_feature(modules)
@import Cocoa;
#else
#import <Cocoa/Cocoa.h>
#endif
#import "MMTabStyle.h"

NS_ASSUME_NONNULL_BEGIN

@interface MMAquaTabStyle : NSObject <MMTabStyle>
{
	NSImage									*aquaTabBg;
	NSImage									*aquaTabBgDown;
	NSImage									*aquaTabBgDownGraphite;
	NSImage									*aquaTabBgDownNonKey;
	NSImage									*aquaDividerDown;
	NSImage									*aquaDivider;
	NSImage									*aquaCloseButton;
	NSImage									*aquaCloseButtonDown;
	NSImage									*aquaCloseButtonOver;
	NSImage									*aquaCloseDirtyButton;
	NSImage									*aquaCloseDirtyButtonDown;
	NSImage									*aquaCloseDirtyButtonOver;
}

@end

NS_ASSUME_NONNULL_END
