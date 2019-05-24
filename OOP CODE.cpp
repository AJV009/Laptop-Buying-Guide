/**
mingw32-g++.exe -fomit-frame-pointer -fexpensive-optimizations -flto -O3 -std=c++1z -ansi -m32 -Og  -c "X-Rig v1.0a.cpp" -o "X-Rig v1.0a.o"

mingw32-g++.exe  -o "X-Rig v1.0a.exe" "X-Rig v1.0a.o"  -O3 -flto -s -static-libstdc++ -static-libgcc -static -m32
 


X-Rig v1.0a.cpp
[

my program for your ultimate Laptop guide **/

#include"USERDll.dll"

using namespace std;

class mains:public us
{
    public:

    string file,fp,addi;
    char x,y;

    void first()
    {
        cs();
        welcome();
        file=start();
    };

    void defa()
    {
        cs();
        head();
        sp(4);
        cout<<">>>>>>>> invalid option";
        Sleep(600);
    };

    void addcart(string file,string addi)
    {
        cs();
        head();
        sp(3);
        additem(file,addi);
        cout<<"                                      Item added to your cart !!!!!";
        sp(4);
        foot();
        Sleep(1000);
        st0();
    }

    void carts()
    {
        cs();
        head();
        sp(4);
        cout<<">> Your cart items : ";
        sp(2);
        fullfile(file);
        foots();
        cin>>x;
        switch (x)
        {
        case 'e':
        case 'E':
            getout();
            break;
        case 'b':
        case 'B':
            st0();
            break;
        case 'm':
        case 'M':
            st0();
            break;
        case 'c':
        case 'C':
            cs();
            head();
            sp(4);
            cout<<"******* ALREADY IN THE CART !!! ********** ";
            Sleep(700);
            carts();
            break;
        default:
            defa();
            carts();

        }
    };

    void st0()
    {
        cs();
        head();
        sp(4);
        cout<<">>>         Welcome to the main menu of the program          <<<";
        sp(3);
        cout<<"               1] Continue Shopping ";
        cout<<"\n";
        cout<<"               2] Check your Cart";
        sp(4);
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            st1();
            break;
        case '2':
            carts();
            break;
        case 'e':
        case 'E':
            getout();
            break;
        case 'b':
        case 'B':
            first();
            Sleep(1000);
            st0();
            break;
        case 'm':
        case 'M':
            st0();
            break;
        case 'c':
        case 'C':
            carts();
            break;
        default:
            defa();
            st0();
        }

    };

    void st1()
    {
        cs();
        head();
        sp(4);
        cout<<"    > Choose what you would like to go with :";
        sp(3);
        cout<<"         1] Use";
        cout<<"\n";
        cout<<"         2] Budget";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            use();
            break;
        case '2':
            bud();
            break;
        case 'e':
        case 'E':
            getout();
            break;
        case 'b':
        case 'B':
            st0();
            break;
        case 'm':
        case 'M':
            st0();
            break;
        case 'c':
        case 'C':
            fullfile(file);
            break;
        default:
            defa();
            st1();
        }

    };

    void use()
    {
        cs();
        head();
        sp(3);
        cout<<"  >> Select the laptop which matches your use :";
        sp(3);
        cout<<"     1] Work and business ( <Work in style> matters a lot )";
        sp(2);
        cout<<"     2] Editing and rendering ( laptops with power full graphics are preferred ) ";
        sp(2);
        cout<<"     3] Daily Use or for students and colleges use (simply a good light weight lapis with sleek look)";
        sp(2);
        cout<<"     4] Pure Gaming (Balancing Power and Portability matters a lot for gamers with fast paced gaming genes)";
        sp(2);
        cout<<"     5] Developers life (Developers doing a lot of experiments should work with lap with 'jack of all trades' trait )";
        sp(2);
        cout<<"     6] X PRO section (these are selection of laptops with ultimate power at there hearts, be it be for workstation or gaming)";
        sp(2);
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            work();
            break;
        case '2':
            edit();
            break;
        case '3':
            dail();
            break;
        case '4':
            game();
            break;
        case '5':
            deve();
            break;
        case '6':
            xpro();
            break;
        case 'e':
        case 'E':
            getout();
            break;
        case 'b':
        case 'B':
            st1();
            break;
        case 'm':
        case 'M':
            st0();
            break;
        case 'c':
        case 'C':
            carts();
            break;
        default:
            defa();
            use();
        }

    };

    void work()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: Work like a pro ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] Lenovo ThinkPad XI Carbon (6th gen)";
        sp(2);
        cout<<"      2] HP EliteBook 840GS";
        sp(2);
        cout<<"      3] Lenovo ThinkPad T480";
        sp(2);
        cout<<"      4] Dell Precision 3530";
        sp(2);
        cout<<"      5] Lenovo ThinkPad P71";
        sp(3);
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/work/ltpx1c.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Lenovo ThinkPad X1 Carbon ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                work();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                work();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/work/hpeb840gs.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP EliteBook 840 GS ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                work();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                work();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/work/ltpt480.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Lenovo ThinkPad T480 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 work();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  work();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/work/dp3530.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Dell Precision 3530 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                work();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                work();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/work/ltpp71.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Lenovo ThinkPad P71 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 work();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 work();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            use();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            work();
        }
    };

    void edit()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: Editing, going for a whole movie makeover with pure portability ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] Apple MacBook with TouchBar 15\"";
        sp(2);
        cout<<"      2] Dell XPS 15 (2018)";
        sp(2);
        cout<<"      3] Microsoft Surface Book 2 15\"";
        sp(2);
        cout<<"      4] Dell Precision 3530";
        sp(2);
        cout<<"      5] HP Z Book x2";
        sp(2);
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/edit/amp15.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Apple MacBook Pro with TouchBar 15\" ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                edit();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                edit();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/edit/dxps15.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Dell XPS 15 (2018) ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                edit();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                edit();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/edit/msb215.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Microsoft Surface Book 2 15\" ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 edit();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                 carts();
                 break;
             default:
                 defa();
                 edit();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/edit/dp3530.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Dell Precision 3530 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                edit();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                edit();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/edit/hpzb2.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP Z Book x2 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 edit();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 edit();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            use();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            edit();
        }
    };

    void dail()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: Laptops for daily use or for schools or college a good battery life and loooks needed ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] Dell XPS 13";
        sp(2);
        cout<<"      2] Acer Aspire E16";
        sp(2);
        cout<<"      3] Asus ChromeBook Flip";
        sp(2);
        cout<<"      4] Samsung NoteBook Pro 9";
        sp(2);
        cout<<"      5] Huawei Matebook X pro";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/dail/dxps13.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Dell XPS 13 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                dail();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                dail();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/dail/aae16.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Acer Aspire E16 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                dail();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                dail();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/dail/acf.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Asus ChromeBook Flip ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 dail();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  dail();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/dail/snp9.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Samsung NoteBook Pro 9 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                dail();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                dail();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/dail/hmxp.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Huawei MateBook X Pro ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 dail();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 dail();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            use();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            dail();
        }
    };

    void game()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: <<< A hardcore gamer from heart >>> ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] Razer Blade (2018)";
        sp(2);
        cout<<"      2] MSI G5 65 Stealth Thin";
        sp(2);
        cout<<"      3] Asus ROG Zephyrus M GM501";
        sp(2);
        cout<<"      4] Acer Predator 15";
        sp(2);
        cout<<"      5] Dell Alienware 17 RS";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/game/rb18.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Razer Blade (2018) ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                game();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                game();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/game/mgs65st.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > MSI G5 65 Stealth Thin ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                game();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                game();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/game/arzmgm501.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Asus ROG Zephyrus M GM501 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 game();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  game();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/game/ap15.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Acer Predator 15 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                game();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                game();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/game/da17rs.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Dell Alienware 17 RS ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 game();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 game();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            use();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            game();
        }
    };

    void deve()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: Its Developers world. Always go for a jack of all trades laptop ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] Lambda TensorBook Basic";
        sp(2);
        cout<<"      2] System76 Oryx Pro";
        sp(2);
        cout<<"      3] Gigabyte Aero 15x";
        sp(2);
        cout<<"      4] Asus ROG Zephyrus GX501";
        sp(2);
        cout<<"      5] Acer Predator 15";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/deve/ltbb.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Lambda TensorBook Basic ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                deve();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                deve();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/deve/s76op.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > System76 Oryx Pro ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                deve();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                deve();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/deve/ga15x.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Gigabyte Aero 15x ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 deve();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  deve();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/deve/arzgx501.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Asus ROG Zephyrus GX501";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                deve();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                deve();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/deve/ap15.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Acer Predator 15 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 deve();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 deve();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            use();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            deve();
        }
    };

    void xpro()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: <<< Some custom build and most power full laptops on the earth >>> ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] Lambda TensorBook MAX";
        sp(2);
        cout<<"      2] System76 Bonobo";
        sp(2);
        cout<<"      3] Acer Predator 21x";
        sp(2);
        cout<<"      4] Asus ROG GX800VH";
        sp(2);
        cout<<"      5] HP Z BOOK 17 G5 Mobile Workstation";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/xpro/ltbm.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Lambda TensorBook MAX ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                xpro();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                xpro();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/xpro/s76b.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > System76 Bonobo ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                xpro();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                xpro();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/xpro/ap21x.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Acer Predator 21x ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 xpro();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  xpro();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/xpro/argx800vh.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Asus ROG GX800VH ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                xpro();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                xpro();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/use/xpro/hpzb17g5mw.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP Z Book 17 G5 Mobile Workstation ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 xpro();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 xpro();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            use();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            xpro();
        }
    };

    void bud()
    {
        cs();
        head();
        sp(3);
        cout<<"  >> Select your preferred budget :";
        sp(3);
        cout<<"     1] Rs. 25,000 - 40,000";
        sp(2);
        cout<<"     2] Rs. 40,000 - 50,000";
        sp(2);
        cout<<"     3] Rs. 50,000 - 60,000";
        sp(2);
        cout<<"     4] Rs. 60,000 - 80,000";
        sp(2);
        cout<<"     5] Rs. 80.000 - 1,00,000";
        sp(2);
        cout<<"     6] Rs. 1,00,000 - 4,00,000";
        sp(2);
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            r2540();
            break;
        case '2':
            r4050();
            break;
        case '3':
            r5060();
            break;
        case '4':
            r6080();
            break;
        case '5':
            r80100();
            break;
        case '6':
            r100400();
            break;
        case 'e':
        case 'E':
            getout();
            break;
        case 'b':
        case 'B':
            st1();
            break;
        case 'm':
        case 'M':
            st0();
            break;
        case 'c':
        case 'C':
            carts();
            break;
        default:
            defa();
            bud();
        }
    };

    void r2540()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: An laptop costing you between 25,000 and 40,000 ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] HP 15t touch";
        sp(2);
        cout<<"      2] Dell Inspiron 15 5575";
        sp(2);
        cout<<"      3] HP Pavilion - 15-cd051nr";
        sp(2);
        cout<<"      4] Dell Inspiron 15 3567";
        sp(2);
        cout<<"      5] MIcrosoft Surface Go";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r2540/hp15tt.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP 15t touch ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r2540();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r2540();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r2540/hpeb840gs.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP EliteBook 840 GS ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r2540();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r2540();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r2540/ltpt480.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Lenovo ThinkPad T480 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r2540();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  r2540();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r2540/dp3530.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Dell Precision 3530 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r2540();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r2540();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r2540/ltpp71.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Lenovo ThinkPad P71 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r2540();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 r2540();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            bud();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            r2540();
        }
    };

    void r4050()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: An laptop costing you between 40,000 and 50,000 ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] Dell Inspiron 15 3576";
        sp(2);
        cout<<"      2] HP ENVY x360 - 15t";
        sp(2);
        cout<<"      3] HP 15t touch i7";
        sp(2);
        cout<<"      4] HP Pavilion Gaming - 15t Quad w/ 2GB gf";
        sp(2);
        cout<<"      5] HP Pavilion x360 - 14-cd0011nr";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r4050/di153576.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Dell Inspiron 15 3576 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r4050();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r4050();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r4050/hhpex36015t.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP ENVY x360 - 15t ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r4050();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r4050();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r4050/hp15tti7.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP 15t touch i7 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r4050();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  r4050();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r4050/hppg15t.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP Pavilion Gaming - 15t Quad w/ 2GB gfx ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r4050();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r4050();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r4050/hppx36014cd0011nr.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP Pavilion x360 - 14-cd0011nr ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r4050();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 r4050();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            bud();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            r4050();
        }
    };

    void r5060()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: An laptop costing you between 50,000 and 60,000 ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] HP ProBook 440 G5 Notebook";
        sp(2);
        cout<<"      2] HP EliteBook 850 G3";
        sp(2);
        cout<<"      3] HP Omen 17t";
        sp(2);
        cout<<"      4] HP ENVY x360 - 15-cn0013nr";
        sp(2);
        cout<<"      5] HP ENVY x360 - 15z Touch";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r5060/hpp440g5n.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP ProBook 440 G5 Notebook ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r5060();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r5060();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r5060/hpe850g3.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP EliteBook 850 G3 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r5060();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r5060();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r5060/hpo17t.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP Omen 17t ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r5060();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  r5060();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r5060/hpex36015cn0013nr.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP ENVY x360 - 15-cn0013nr ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r5060();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r5060();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r5060/hpex36015zt.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP ENVY x360 - 15z Touch ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r5060();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 r5060();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            bud();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            r5060();
        }
    };

    void r6080()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: An laptop costing you between 60,000 to 80,000 ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] Microsoft Surface Pro";
        sp(2);
        cout<<"      2] Apple MacBook Air";
        sp(2);
        cout<<"      3] System76 Galago Pro";
        sp(2);
        cout<<"      4] System76 Gazelle";
        sp(2);
        cout<<"      5] HP ZBook 15v G5 Mobile Workstation";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r6080/msp.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Microsoft Surface Pro ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r6080();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r6080();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r6080/ama.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Apple MacBook Air ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r6080();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r6080();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r6080/s76gp.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > System76 Galago Pro ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r6080();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  r6080();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r6080/s76g.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > System76 Gazelle ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r6080();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r6080();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r6080/hpzb15vg5mw.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP ZBook 15v G5 Mobile Workstation ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r6080();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 r6080();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            bud();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            r6080();
        }
    };

    void r80100()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: An laptop costing you between 80,000 to 1,00,000 ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] System76 Kudu";
        sp(2);
        cout<<"      2] Apple Macbook";
        sp(2);
        cout<<"      3] HP ProBook 650 G4 Notebook";
        sp(2);
        cout<<"      4] Asus ROG GL552VW CN430T";
        sp(2);
        cout<<"      5] Asus Zenbook Core i5";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r80100/s76k.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > System76 Kudu ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r80100();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r80100();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r80100/am.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Apple Macbook ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r80100();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r80100();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r80100/hpp650g4n.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > HP ProBook 650 G4 Notebook ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r80100();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  r80100();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r80100/arggl552vwcn430t.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Asus ROG GL552VW CN430T ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r80100();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r80100();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r80100/azbci5.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Asus Zenbook Core i5 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r80100();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 r80100();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            bud();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            r80100();
        }
    };

    void r100400()
    {
        cs();
        head();
        sp(3);
        cout<<":::::::: An laptop costing you between 1,00,000 to 4,00,000 ----";
        sp(2);
        cout<<"   >> Pick one these to view in detail :";
        sp(2);
        cout<<"      1] lambda Tensorbook MAX";
        sp(2);
        cout<<"      2] Asus ROG G501VW FI034T";
        sp(2);
        cout<<"      3] System76 Bonobo WS";
        sp(2);
        cout<<"      4] Apple Macbook Pro";
        sp(2);
        cout<<"      5] Microsoft Surface Book 2";
        sp(2);
        cout<<"";
        foots();
        cin>>x;
        switch (x)
        {
        case '1':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r100400/ltbm.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > lambda Tensorbook MAX ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r100400();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r100400();
            }
            break;
        case '2':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r100400/arg501vwfi034t.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Asus ROG G501VW FI034T ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r100400();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r100400();
            }
            break;
        case '3':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r100400/s76bws.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > System76 Bonobo WS ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r100400();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
             case 'c':
             case 'C':
                  carts();
                  break;
             default:
                  defa();
                  r100400();
            }
            break;
        case '4':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r100400/amp.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Apple Macbook Pro ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                getout();
                break;
            case 'b':
            case 'B':
                r100400();
                break;
            case 'm':
            case 'M':
                st0();
                break;
            case 'c':
            case 'C':
                carts();
                break;
            default:
                defa();
                r100400();
            }
            break;
        case '5':
            cs();
            head();
            sp(3);
            cout<<"   Viewing Laptop in detail ----";
            sp(2);
            fp="X/bud/r100400/msb2.x";
            fullfile(fp);
            sp(3);
            cout<<"  a] Add to cart";
            sp(2);
            foots();
            cin>>x;
            switch (x)
            {
            case 'a':
            case 'A':
                addi=" > Microsoft Surface Book 2 ";
                addcart(file,addi);
                break;
            case 'e':
            case 'E':
                 getout();
                 break;
            case 'b':
            case 'B':
                 r100400();
                 break;
            case 'm':
            case 'M':
                 st0();
                 break;
            case 'c':
            case 'C':
                 carts();
                 break;
            default:
                 defa();
                 r100400();
            }
            break;
        case 'e':
        case 'E':
            getout();
        case 'b':
        case 'B':
            bud();
        case 'm':
        case 'M':
            st0();
        case 'c':
        case 'C':
            carts();
        default:
            defa();
            r100400();
        }
    };
};

int main()
{
    us u;
    mains m;
    m.first();
    Sleep(1500);
    m.st0();
    return 0;
}


//]

//userdll.dll
//[

#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<windows.h>

using namespace std;

class us
{
public:


    void welcome()
    {
        cs();
        cout<<"*******************************************************************************************************\n";
        cout<<"*********************************                            ******************************************\n";
        cout<<"*********************************          X Rig v1.0a       ******************************************\n";
        cout<<"*********************************                            ******************************************\n";
        cout<<"*******************************************************************************************************\n";
        cout<<"********************************** The Ultimate Laptop Guide ******************************************\n";
        cout<<"\n";
        cout<<"                                                                     << - Created by SYCM QUANTUM ph >>\n";
        sp(3);
        cout<<"           ***************                                               ***************               \n";
        cout<<"           * *********** *                                               * *********** *               \n";
        cout<<"           * *         * *                                               * *         * *               \n";
        cout<<"           * *         * *                                               * *         * *               \n";
        cout<<"           * *         * *                                               * *         * *               \n";
        cout<<"           * *********** *                                               * *********** *               \n";
        cout<<"           ***************                                               ***************               \n";
        cout<<"            * *********** *                                             * *********** *                \n";
        cout<<"             * *********** *                                           * *********** *                 \n";
        cout<<"              * *********** *                                         * *********** *                  \n";
        cout<<"               * *********** *                                       * *********** *                   \n";
        cout<<"                ***************                                     ***************                    \n";
        sp(2);
        cout<<"                   < PowerFull Laptops to deal with anything you throw at it >                           ";
        sp(4);
        cout<<"_________________________________________________________________________________________________________";
        cin.get();
        cs();
    };

    void head()
    {
        cs();
        cout<<"********************************************************************************************************\n";
        cout<<"** X Rig  **                                                                  - Built by SYCM QUANTUM ph\n";
        cout<<"*************                                                                                           \n";

    };

    void foots()
    {
        sp(2);
        cout<<"  e]Exit          b]Back          m]Main          c] cart";
        sp(2);
        cout<<"__________________________________________________________________________________________________________\n";
    };

    void foot()
    {
        sp(3);
        cout<<"__________________________________________________________________________________________________________\n";
    };

    void cs()
    {
        system("CLS");
    };

    void getout()
    {
        cs();
        head();
        sp(3);
        cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< EXITING PROGRAM >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
        sp(2);
        Sleep(800);
        cs();
        head();
        sp(3);
        cout<<"*************************************** Thanks for using our program *************************************";
        sp(4);
        Sleep(1000);
        exit(EXIT_SUCCESS);
    };

    void sp(int n)
    {
        int m;
        for(m=0;m<=n;m++)
            cout<<endl;
    };

    string start()  /** creating a file with user input **/
    {
        int i=0;
        ofstream f;
        string filename="user/";
		string dir;
        bool ifo;
        cs();
        head();
        sp(4);
        sp(2);
        cout <<"                                      PLease enter in your Username =  ";
        cin>>dir;
        filename += (dir + ".db");
        cs();
        head();
        ifstream status(filename.c_str());
        ifo=(status.good());
        if(ifo)
            {
                sp(6);
                cout<<"                                         User name already exists !!!!!!!!!!! ";
                //f.open( filename.c_str() );
            }
        else
            {
                f.open( filename.c_str() );
                sp(4);
                cout<<"                                          NEW User Welcome to X Rig v1.0a !!!!!!!! \n";
				Sleep(500);
			}
        foot();
        cin.get();
		return filename;
    };


    void fullfile(string filename)     /** Reads full file **/
    {
        char * buffer;
        long size;

        ifstream ifile(filename.c_str());//pass here something

        ifile.seekg(0,ifstream::end);  /** get size of file    **/
        size=ifile.tellg();
        ifile.seekg(0);

        buffer = new char [size];       /** allocate memory for file content **/

        ifile.read (buffer,size);       /** read content of ifile   **/
        cout.write (buffer,size);       /** write to outfile **/

        delete[] buffer;                /** release dynamically-allocated memory    **/
    };


    void additem(string filename, string addi)
    {
        addi += " \n";
        fstream a;
        a.open(filename.c_str(),fstream::app);
        a<<addi;
        a.close();
    };

};

//]