#ifndef BROWSER_H
#define BROWSER_H


class Browser
{
    public:
        Browser();
        virtual ~Browser();
        void OpenTab();
        void CloseTab();
        void EnterURL();

    protected:

    private:
        int No_tabs;
};

#endif // BROWSER_H
