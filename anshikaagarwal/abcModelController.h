//
//  abcModelController.h
//  anshikaagarwal
//
//  Created by Anshika Agarwal on 4/9/14.
//  Copyright (c) 2014 Anshika Agarwal. All rights reserved.
//

#import <UIKit/UIKit.h>

@class abcDataViewController;

@interface abcModelController : NSObject <UIPageViewControllerDataSource>

- (abcDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(abcDataViewController *)viewController;

@end
